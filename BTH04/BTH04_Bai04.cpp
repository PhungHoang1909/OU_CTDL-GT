/* Viết chương trình nhận vào 1 số nguyên dương n. Xuất ra màn hình số chữ số và
tổng các chữ số của n. Ví dụ: n = 3523 thì kết quả là n có 4 chữ số và tổng các
chữ số là 13 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    int chuso;
    int tam;
    int tong = 0;
    int dem = 0;
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n <= 0) {
            cout << "Nhap sai, vui long nhap lai" << endl;
        }
    } while (n <= 0);
    tam = n;
    while (tam > 0)
    {
        chuso = tam % 10;
        tam /= 10;
        tong += chuso;
        dem++;
    }
    cout << "So chu so cua " << n << " la: " << dem << endl;
    cout << "Tong chu so cua " << n << " la: " << tong << endl;
    system("pause");
    return 0;
}