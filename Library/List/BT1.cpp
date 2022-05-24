// Cho một số tự nhiên n. Hãy khởi tạo một list chứa lần lượt các số nguyên từ 1 đến n.

#include <iostream>
#include <list>
#include <vector>

using namespace std;

list<int> initList(int n)
{
    list<int> a;
    for (int i = 1; i <= n; i++) {
        a.push_back(i);
    }
    return a;
}

vector<int> verifyFunction(int n)
{
    list<int> lst = initList(n);
    vector<int> res(lst.begin(), lst.end());
    return res;
}