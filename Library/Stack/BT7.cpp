/*
Cho một sâu s chỉ gồm các ký tự viết thường, 
hãy viết hàm trả về chuỗi mã hóa của sâu này. Xem ví dụ để hiểu rõ hơn quá trình mã hóa
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

std::string encodeString(std::string s)
{
    s = s+ '@';
    stack<char> st;
    string str = "";
    for (int i = 0; i <s.length(); i++) {
        if (st.empty() || st.top() == s[i]) {
            st.push(s[i]);
        } else {
            int count = 0;
            str = str + st.top();
            while(!st.empty()) {
                count++;
                st.pop();
            }
            str = str + to_string(count);
            st.push(s[i]);
            count = 1;
        }
    }
    return str;
}