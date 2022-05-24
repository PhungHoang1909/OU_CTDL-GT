/*Viết chương trình nhập vào 1 chuỗi ký tự và 1 từ. Sau đó đếm số lần xuất hiện của từ
trong chuỗi vừa nhập.   */
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	char x;
	int d;
	int dem = 0;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	cout << "Nhap x: ";
	cin >> x;
	d = s.length();
	for (int i = 0; i < d; i++)
		if (s[i] == x)
			dem++;
	cout << "So lan xuat hien cua " << x << " la " << dem << endl;
	return 0;
}