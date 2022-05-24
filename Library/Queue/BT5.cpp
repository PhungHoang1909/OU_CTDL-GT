/*
Cho một mảng các số nguyên arr và một số nguyên dương k. ]
Hãy viết hàm trả về các phần tử âm đầu tiên trong cửa số k. 
Nếu không tồn tại số âm nào output 0. */

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> firstNegative(vector<int> a, int k)
{
    queue<int> st;
    int n = a.size();
    for (int i = 0; i < k - 1; i++) {
        if (a[i] < 0) st.push(i);
    }
    vector<int> res;
    for (int i = k - 1; i < n; i++) {
        if (a[i] < 0) st.push(i);
        while(!st.empty() && st.front() < i - k + 1) st.pop();
        res.push_back(st.empty() ? 0 : a[st.front()]);
    }
    return res;
}