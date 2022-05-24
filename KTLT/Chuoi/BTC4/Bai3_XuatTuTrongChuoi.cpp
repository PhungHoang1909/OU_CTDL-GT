/*
Viết chương trình nhập vào 1 chuỗi tối đa 50 ký tự. Sau đó xuất
từng từ của chuỗi vừa nhập dưới dạng trên từng dòng.
*/

#include <iostream>

using namespace std;

int main()
{
	char s[51], n;
	cout << "Nhap chuoi: ";
	cin.getline(s, 50);
	n = strlen(s);
	for (int i = 0; i < n; i++)
		if (isspace(s[i]))
			cout << endl;
		else
			cout << s[i];
	cout << endl;
	system("pause");
	return 0;
}