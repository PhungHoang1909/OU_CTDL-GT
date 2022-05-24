/*
Cho list số nguyên và hai số nguyên first và last.
(1 ≤ first ≤ last  ≤ size).

Hãy xóa các phần tử bắt đầu từ số thứ first đến số thứ last.
*/

#include <iostream>
#include <list>
#include <vector>

using namespace std;

list<int> changeValue(list<int> l, int first, int last)
{
    list<int>::iterator it = l.begin();
    advance(it, first - 1);
    list<int>::iterator it2 = l.begin();
    advance(it2, last);
    l.erase(it, it2);
    return l;
}

vector<int> verifyFunction(vector<int> v, int first, int last)
{   
    list<int> l(v.begin(), v.end());
    l = changeValue(l, first, last);
    vector<int> vec(l.begin(), l.end());
	return vec;
}