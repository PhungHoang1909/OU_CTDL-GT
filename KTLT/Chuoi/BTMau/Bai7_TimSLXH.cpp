/*
Viết chương trình dùng string để cho phép nhập vào một
chuỗi ký tự và 1 từ. Sau đó tìm số lần xuất hiện của từ
trong chuỗi đó
*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string s;
    char c;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "Nhap ki tu: ";
    cin >> c;
    int count = 0;
    for(int i = 0; i <s.size(); i++)
    {
        if(s[i] == c)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}