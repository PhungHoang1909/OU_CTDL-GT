/*
Viết chương trình yêu cầu:
a) Nhập vào một ký tự, sau đó in ra mã ASCII của ký tự đó.
b) Nhập vào một số nguyên (1..255), sau đó in ra ký tự có mã ASCII tương ứng
*/

#include<iostream>

using namespace std;

int main()
{
    char c;
    int n;
    cout << "Nhap ky tu : ";
    cin >> c;
    cout << "Nhap vao so nguyen: ";
    cin >> n;
    cout << "Ma ASCII cua ky tu " << c << " la: " << int(c) << endl;
    cout << "Ky tu tuong ung voi " << n << " la: " << char(n) << endl;
    system("pause");
    return 0;
}