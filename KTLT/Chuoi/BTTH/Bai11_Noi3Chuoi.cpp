/*Bài 11. Viết chương trình cho phép nhập vào họ, chữ lót, tên (ở 3 biến chuỗi khác nhau). Sau đó
trả về kết quả họ tên đầy đủ (nối cả 3 chuỗi lại với nhau).  */
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	string s2;
	string s3;
	string s4 = " ";
	int d1, d2, d3, d4;
	cout << "Nhap ho: ";
	getline(cin, s1);
	cout << "Nhap chu lot: ";
	getline(cin, s2);
	cout << "Nhap ten: ";
	getline(cin, s3);
	d1 = s1.length();
	d2 = s2.length();
	d3 = s3.length();
	d4 = s4.length();
	s1.insert(d1, s4);
	s1.insert(d1 + d4, s2);
	s1.insert(d1 + d4 + d2, s4);
	s1.insert(d1 + d4 + d2 + d4, s3);
	cout << s1 << endl;
	return 0;
}