/*
Viết chương trình nhập vào 1 chuỗi họ và tên. Sau đó tiến hành tách
họ, chữ lót, tên ra thành 3 dòng khác nhau.
*/

#include <iostream>

using namespace std;

int main()
{
	char s[51], d;
	cout << "Nhap chuoi: ";
	cin.getline(s, 50);
	d = strlen(s);
	int p = 0, q = d - 1;
	while (s[p] != ' ')
		p++;
	while (s[q] != ' ')
		q--;
	for (int i = 0; i < d; i++)
	{
		if (i == p || i == q)
			cout << endl;
		else
			cout << s[i];
	}
	cout << endl;
	system("pause");
	return 0;
}