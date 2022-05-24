/*
Cho chiều cao của các thanh gỗ theo thứ tự từ trái qua phải, 
ứng với mỗi thanh gỗ bạn gần phải xác định khoảng cách tới thanh gỗ nằm bên trái và dài hơn nó là bao nhiêu.

*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

std::vector<int> stickSpan(std::vector<int> arr)
{
    stack<int> st;
    vector < int > res;
    int n = arr.size();
    st.push(0); 
    res.push_back(1);

    for (int i = 1; i < n; i++) {
        while (!st.empty() && arr[st.top()] <= arr[i]) 
            st.pop(); 
        res.push_back((st.empty()) ? (i + 1) : (i - st.top())); 
        st.push(i); 
    }

    return res;
}