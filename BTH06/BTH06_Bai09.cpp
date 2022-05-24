/*
Viết hàm tính tổng các chữ số của số nguyên n; và chương trình để kiểm tra hàm đã
viết
*/

#include <iostream>
#include <cmath>

using namespace std;

int tongsonguyen(int n)
{
    int chuso;
    int tong = 0;
    while (n > 0)
    {
        chuso = n % 10;
        tong += chuso;
        n /= 10;
    }
    return tong;
}

int main()
{
    int n, n1;
    cout << "Nhap vao so nguyen: ";
    cin >> n;
    n1 = abs(n); // GTTD cua n
    cout << "Tong cac chu so cua " << n << " la: " << tongsonguyen(n1) << endl;
    system("pause");
    return 0;
}