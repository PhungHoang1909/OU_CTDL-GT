#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	char s[51], n;
	cout << "Nhap chuoi: ";
	cin.getline(s, 50);
	n = strlen(s);
	s[0] = toupper(s[0]);
	for (int i = 0; i < n - 1; i++)
		if (isspace(s[i]))
			s[i + 1] = toupper(s[i + 1]);
		else
			s[i + 1] = tolower(s[i + 1]);
	cout << "Chuoi ket qua: " << s << endl;
	system("pause");
	return 0;
}