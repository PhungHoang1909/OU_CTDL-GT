
/*
Để xóa tất cả phần tử có giá trị nào đó trong list ta dùng hàm remove() (độ phức tạp O(n)).
*/

/*
Cho list linkedList chứa các số nguyên và một số nguyên n.

Hãy xóa những phần tử có giá trị n trong list. */

#include <iostream>
#include <vector>
#include <list>

using namespace std;

list<int> remove(list<int> l, int n)
{
    l.remove(n);
    return l;
}

vector<int> verify(vector<int> v, int n)
{
    list <int> l(v.begin(), v.end());
    l = remove(l, n);
    vector<int> vec(v.begin(), v.end());
    return vec;
}