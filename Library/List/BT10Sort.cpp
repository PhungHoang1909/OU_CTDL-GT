/*
Để sắp xếp list không giảm ta dùng hàm sort() (Độ phức tạp O(nlogN). 
Ví dụ để sắp xếp list a:
// a = [3,2,1,2]
a.sort();
//a = [1,2,2,3]
*/

/* Cho một list các số nguyên. 
Hãy sắp xếp các phần tử trong list theo thứ tự không giảm.*/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

list<int> sapxep(list<int> l)
{
    for (list<int>::iterator it1 = l.begin(); it1 != l.end(); it1++) {
        list<int>::iterator it2 = it1;
        for (; it1 != l.end() && ++it2!=l.end();) {
            if(*it1 > *it2) {
                int tmp = *it1;
                *it1 = *it2;
                *it2 = tmp;
            }
        }
    }
    return l;
}

vector<int> verify(vector<int> v)
{
    list<int> l(v.begin(), v.end());
    l = sapxep(l);
    vector<int> vec(l.begin(), l.end());
    return vec;
}