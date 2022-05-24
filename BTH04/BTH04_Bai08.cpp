/*
Viết chương trình nhận vào 1 số nguyên n > 0. Tính và xuất tổng các chữ số lẻ
của n
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int chuso;
    int tong = 0;
    do
    {
        cout << "Nhap vao so nguyen: ";
        cin >> n;
        if (n <= 0) {
            cout << "Nhap sai, Nhap lai!";
        }
    } while (n <= 0);
    int tam = n;
    while (tam > 0)
    {
        chuso = tam % 10;
        if (chuso % 2 == 1) {
            tong += chuso;
        }
        tam /= 10;
    }
    cout << "Tong chu so le cua " << n << " la: " << tong << endl;
    system("pause");
    return 0;
}