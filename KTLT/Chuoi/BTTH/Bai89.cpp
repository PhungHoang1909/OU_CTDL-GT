/*Bài 8. Xây dựng chương trình nhập vào chuỗi họ và tên. Sau đó tách họ, chữ lót, tên ra mỗi
dòng.
Bài 9. Cài đặt bài 8 dưới dạng hàm lấy họ, hàm lấy chữ lót, hàm lấy tên. Viết chương trình kiểm
chứng hàm vừa xây dựng.*/
#include <iostream>
#include <cstring>
using namespace std;
void ho(char* s)
{
	int star = 0;
	while (s[star] != ' ')
		star++;
	for (int i = 0; i <= star; i++)
	{
		cout << s[i];
	}
}
void chuLot(char*s, int n)
{
	int i;
	int j;
	for (i = 0; i < n; i++)
		if (s[i] == ' ')
			break;
	for (j = n - 1; j >= 0; j--)
		if (s[j] == ' ')
			break;
	for (int k = i + 1; k <= j + 1; k++)
		cout << s[k];
}
void ten(char* s, int n)
{
	int end = n - 1;
	while (s[end] != 0)
		end--;
	for (int i = n - 1; i >= end; i--)
		cout << s[i];
}
int main()
{
	char s[50];
	int d;
	int star, end;
	cout << "Nhap ho ten: ";
	cin.getline(s, 50);
	d = strlen(s);
	star = 0;
	end = d - 1;
	while (s[star] != ' ')
		star++;
	while (s[end] != ' ')
		end--;
	for (int i = 0; i < d; i++)
	{
		if (i == star || i == end)
			cout << endl;
		else
			cout << s[i];
	}
	cout << "\nCau 9: \n";
	ho(s);
	cout << endl;
	
	ten(s, d);
	return 0;
}