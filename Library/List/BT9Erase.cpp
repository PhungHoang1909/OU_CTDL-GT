/*
Muốn xóa phần tử ở interator it, ta làm như sau:

	a.erase(it);

Muốn xóa phần tử thứ k trong list a, ta làm như sau.

	list<int>:: iterator it = a.begin();
	advance(it,k-1);
	a.erase(it);

Muốn xóa một lúc nhiều số, ta làm như sau:

	a.erase(iteratorFirst,iteratorLast);

Ví dụ như muốn xóa phần tử thứ x đến phần tử thứ k (k≥x) trong list a, ta làm như sau:

	list<int>:: iterator it = a.begin();
	advance(it,x-1);

	list<int>:: iterator it2 = a.begin();
	advance(it2,k);

	a.erase(it1, it2);
*/

/* Cho một list chứa các số nguyên và một số nguyên n, 
hãy xóa những phần tử có giá trị lớn hơn hoặc bằng n trong list đó. */

#include <iostream>
#include <vector>
#include <list>

using namespace std;

list<int> removeElements(list<int> linkedList, int n) {
    list<int>::iterator i = linkedList.begin(), j;
    for (; i != linkedList.end(); i++) {
        if (*i >= n) {
            j = i;
            i--;
            linkedList.erase(j);
        }
    }
    return linkedList;
}

vector<int> verifyFunction(vector<int> v, int n) {
	list<int> l(v.begin(), v.end());
    l = removeElements(l, n);
    vector<int> vec(l.begin(), l.end());
	return vec;
}