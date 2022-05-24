/*Xây dựng hàm nhận vào 1 chuỗi, trả về kết quả đảo ngược của chuỗi đó. Viết chương
trình kiểm chứng hàm vừa xây dựng.  */

#include <iostream>
#include <string>

using namespace std;

void DAONGUOC(string s, int n)
{
	for (int i = n; i >= 0; i--)
	{
		cout << s[i];
	}
}
int main()
{
	string s;
	int d;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	d = s.length();
	cout << "Xuat chuoi dao nguoc : ";
	DAONGUOC(s, d);
	cout << endl;
	return 0;
}