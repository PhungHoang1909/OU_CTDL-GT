/*
Nếu như hàm push_back() dùng để thêm một phần tử vào cuối vector,
thì hàm pop_back() (có độ phức tạp là O(1)) sẽ dùng để xóa phần tử cuối cùng trong vector.

Nếu như hàm push_front() dùng để thêm một phần tử vào đầu vector,
thì hàm pop_front() (có độ phức tạp là O(1)) sẽ dùng để xóa phần tử đầu tiên trong vector.
*/

/* Cho một list số nguyên.
Hãy xóa phần tử đầu tiên và phần tử cuối cùng trong list đó. */

#include <iostream>
#include <vector>
#include <list>

using namespace std;

list<int> deleteFrontBack(list<int> l)
{
    l.pop_front();
    l.pop_back();
    return l;
}

vector<int> verifyFunction(vector<int> v)
{
    list<int> l(v.begin(), v.end());
    l = deleteFrontBack(l);
    vector<int> ans(l.begin(), l.end());
    return ans;
}