/*Viết chương trình nhập vào 2 chuỗi s1 và s2. Yêu cầu người dùng nhập vị trí cần chèn
(phải hợp lệ) để tiến hành chèn s2 vào s1 bắt đầu từ vị trí đã nhập. Xuất lại chuỗi kết quả sau
khi chèn   */
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	int d1, d2;
	int pos;
	cout << "Nhap chuoi s1: ";
	getline(cin, s1);
	cout << "Nhap chuoi s2: ";
	getline(cin, s2);
	d1 = s1.length();
	do {
		cout << "Nhap vi tri ";
		cin >> pos;
		if (pos<0 || pos>d1)
			cout << "Nhap sai. Nhap lai! \n";
	} while (pos<0 || pos>d1);
	s1.insert(pos, s2);
	cout << s1 << endl;
}