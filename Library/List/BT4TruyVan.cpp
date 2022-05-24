/*
Muốn truy vấn đến các phần tử trong list thường sẽ truy vấn dựa và con trỏ chỉ vào số đầu tiên a.begin().

Muốn dịch con trỏ k lần ta sử dụng hàm advance(it,k) 
hàm này không trả về giá trị và có độ phức tạp là số số lần dịch con trỏ.
Ví dụ muốn trỏ tới phần tử thứ k+1 trong list l ta làm như sau:

list<int>::iterator it = l.begin(); it trỏ vào phần tử đầu tiên
advance(it, k); trỏ vào phần tử thứ k + 1
*/

/*
Cho list số nguyên, và hai số nguyên k và x. (1 ≤ k ≤ size()).

Hãy thay đổi giá trị của số thứ k trong list thành x
*/
#include<iostream>
#include<list>
#include<vector>

using namespace std;

list<int> changeValue(list<int> l, int k, int x) {
	list<int>::iterator it = l.begin(); // it trỏ vào phần tử đầu tiên
	advance(it, k-1);
    *it = x;
    return l;
}

vector<int> verifyFunction(vector<int> v, int k, int x) {
	list<int> l(v.begin(), v.end());
	l = changeValue(l, k, x);
	vector<int> vec(l.begin(), l.end());
	return vec;
}