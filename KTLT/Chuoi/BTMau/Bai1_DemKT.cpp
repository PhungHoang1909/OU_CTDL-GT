#include <iostream>

using namespace std;

int main()
{
	char s1[51], *p;
	int demkt = 0, demkhtr = 0;
	cout << "Nhap chuoi: ";
	cin.getline(s1, 50);
	p = s1;
	while (*p)
	{
		if (isalnum(*p))
			demkt++;
		if (isspace(*p))
			demkhtr++;
		p++;
	}
	cout << "Chuoi co " << demkt << " ky tu" << endl;
	cout << "Chuoi co " << demkhtr << " khoang trang" << endl;
	system("pause");
	return 0;
}