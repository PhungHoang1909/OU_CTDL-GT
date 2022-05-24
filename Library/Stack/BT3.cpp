/*
Cho một danh sách các số nguyên dương arr dưới dạng vector<int>. 
Bạn cần phải đưa từng phần tử trong danh sách này vào stack. 
Sau đó output giá trị nhỏ nhất trong stack trước mỗi lần pop(). Xem ví dụ để hiểu rõ hơn.
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

std::vector<int> popMin(std::vector<int> arr)
{
    stack<int> st_min;
    vector<int> res;
    st_min.push(arr[0]);
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] >= st_min.top()) {
            st_min.push(st_min.top());
        } else {
            st_min.push(arr[i]);
        }
    }
    while(st_min.empty() == false) {
        res.push_back(st_min.top());
        st_min.pop();
    }
    return res;
}