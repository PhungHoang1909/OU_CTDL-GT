/*
Viết các hàm sau đây và viết chương trình kiểm tra các hàm đã viết:
a. Hàm tính tổng các số từ 1 đến n (n là số nguyên dương).
b. Hàm tính n! (n là số nguyên dương).
*/

#include <iostream>

using namespace std;

int tong1denN(int n)
{
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    return tong;
}

int tinhgiaithua(int m)
{
    int giaithua = 1;
    for (int j = 1; j <= m; j++) {
        giaithua *= j;
    }
    return giaithua;
}

int main()
{
    int n;
    cout << "Nhap vao so nguyen duong: ";
    cin >> n;
    cout << "Tong tu 1 den " << n << " la: " << tong1denN(n) << endl;
    cout << n << "! = " << tinhgiaithua(n) << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << i << "! = " << tinhgiaithua(i) << endl;
    }
    system("pause");
    return 0;
}