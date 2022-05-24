/*
Cho một biểu thức dưới dạng chuỗi và chỉ chứa hai loại ký tự là '{' và '}'. 
Hãy viết hàm output số biến đổi nhỏ nhất để biểu thức trở thành cân bằng hoặc output -1 
nếu không thể đưa biểu thức về cân bằng.

Biểu thức cân bằng là biểu thức mà mỗi dấu '{' chỉ ứng với một dấu '}' và ngược lại.

Ví dụ "{{{}}{}}", "{}" là biểu thức cân bằng và "}{" là biểu thức không cân bằng, 
để chuyển biểu thức này về dạng cân bằng cần 2 phép biến đổi.
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int reversals(std::string exp)
{
    const auto len = exp.length();

    if (len %2){
        return -1;
    }

    std::stack<char> st;

    for(const auto c: exp) {
        if (c == '}') {
            if(!st.empty() && st.top() == '{') {
                st.pop();
                continue;
            }    
        } 
        
        st.push(c);       
    }

    int ret = 0;

    while( !st.empty()) {
        const auto t1 = st.top();
        st.pop();
        const auto t2 = st.top();
        st.pop();

        if(t1 != t2) {
            ret ++;
        }
        ret++;
    }

    return ret;
}