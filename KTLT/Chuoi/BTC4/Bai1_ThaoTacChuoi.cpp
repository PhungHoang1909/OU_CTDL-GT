/*
Bài 1. Viết chương trình nhận vào 2 chuỗi ký tự (kể cả khoảng trắng). Sau đó thực hiện:
a. So sánh xem chuỗi nào dài hơn?
b. Chuyển từng chuỗi thành dạng in hoa ký tự đầu tiên mỗi từ. Xuất lại 2 chuỗi sau khi
chuyển.
c. Nối chuỗi thứ 2 vào chuỗi thứ nhất. Xuất lại kết quả nối
*/

#include <iostream>
#include <cctype>
using namespace std;
char HOA(char ch) // toupper(char)
{
	if (islower(ch))
		ch = ch - 32;
	return ch;
}
char THUONG(char ch)
{
	if (isupper(ch))
		ch = ch + 32;
	return ch;
}
int main()
{
	char s1[100], s2[100];
	int n1, n2;
	cout << "Nhap chuoi 1: ";
	cin.getline(s1, 50);
	n1 = strlen(s1);
	cout << "Nhap chuoi 2: ";
	cin.getline(s2, 50);
	n2 = strlen(s2);
	if (n1 == n2)
		cout << "Chuoi 1 dai bang chuoi 2\n";
	else
		if (n1>n2)
			cout << "Chuoi 1 dai hon chuoi 2\n";
		else
			cout << "Chuoi 2 dai hon chuoi 1\n";
	if (isalpha(s1[0]))
		s1[0] = HOA(s1[0]);
	for (int i = 0; i < n1 - 1; i++)
		if (isspace(s1[i]) && isalpha(s1[i + 1]))
			s1[i + 1] = HOA(s1[i + 1]);
		else
			if (isalpha(s1[i + 1]))
				s1[i + 1] = THUONG(s1[i + 1]);
	cout << "Ket qua chuoi s1: " << s1 << endl;
	if (isalpha(s2[0]))
		s2[0] = HOA(s2[0]);
	for (int i = 0; i<n2 - 1; i++)
		if (isspace(s2[i]) && isalpha(s2[i + 1]))
			s2[i + 1] = HOA(s2[i + 1]);
		else
			if (isalpha(s2[i + 1]))
				s2[i + 1] = THUONG(s2[i + 1]);
	cout << "Ket qua chuoi s2: " << s2 << endl;
	strcat_s(s1, " ");
	strcat_s(s1, s2);
	cout << "Ket qua noi chuoi s1 va s2: " << s1 << endl;
	system("pause");
	return 0;
}