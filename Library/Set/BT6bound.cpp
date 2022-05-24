/*
upper_bound() :  Trả về iterator đến vị trí phần tử nhỏ nhất mà lớn hơn khóa, 
nếu không tìm thấy trả về vị trí “end” của set.. ĐPT O(logN). 

lower_bound() : Trả về iterator đến vị trí phần tử nhỏ nhất mà không nhỏ hơn (lớn hơn hoặc bằng) khóa 
(dĩ nhiên là theo phép so sánh), nếu không tìm thấy trả về vị trí “end” của set. ĐPT O(logN).
*/

/*
Cho một dãy số nguyên arr và số nguyên k.

Hãy tìm ra hai số:

Số m là số nhỏ nhất trong dãy lớn hơn k. Nếu không có thì m = -1.
Số n là số nhỏ nhất trong dãy lớn hơn hoặc bằng k. Nếu không có thì n = -1.
Kết quả trả về là dãy gồm 2 số [m,n].
*/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

std::vector<int> setFunction(std::vector<int> arr, int k)
{
    int m,n;
    std::set<int> s(arr.begin(), arr.end());
    set <int>:: iterator it;

    it = s.upper_bound(k);
    m = (it != s.end()) ? *it : -1;

    it = s.lower_bound(k);
    n = (it != s.end()) ? *it : -1; 

    return {m,n};
}