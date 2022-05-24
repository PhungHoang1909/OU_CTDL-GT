/*
Cho một dãy số nguyên và số nguyên dương k.

Một phép biến đổi sẽ dịch chuyển phần tử đầu tiên ra sau phần tử cuối cùng,
 hãy trả về dãy sau khi đã biến đổi k lần.
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

std::vector<int> transformArray(std::vector<int> arr, int k)
{
    vector<int> v;
    queue<int> q;
    for (int i = 0; i < arr.size(); i++) {
        q.push(arr[i]);
    }
    for (int i = 0; i < k; i++) {
        int x = q.front();
        q.pop();
        q.push(x);
    }
    while (!q.empty()) {
        v.push_back(q.front());
        q.pop();
    }
    return v;
}