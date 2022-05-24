/*
Cho số nguyên dương n. 

Hãy viết hàm trả về các số nhị phân từ 1 tới n.
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<string> generateBinary(int n)
{
    vector<string> res;
    queue<string> q;
    q.push("1");
    while(n--) {
        q.push(q.front() + "0");
        q.push(q.front() + "1");
        res.push_back(q.front());
        q.pop();
    }
    return res;
}