/*

Viết chương trình nhập vào một chuỗi ký tự và in ra chiều dài của chuỗi.
Hướng dẫn: Sử dụng biến s có kiểu string, dùng getline(cin, s) để nhập chuỗi (kể cả
khoảng trắng) và s.length() để tính chiều dài chuỗi.

*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cout << "Nhap chuoi ky tu: ";
    getline(cin, s);
    cout << "Chieu dai cua chuoi = " << s.length() << endl;
    system("pause");
    return 0;
}