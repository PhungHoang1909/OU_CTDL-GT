/*
Viết chương trình nhận vào 1 số nguyên dương n > 1. Tính và xuất tích các số lẻ
trong phạm vi từ 1 đến n.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int tich = 1;
    int i = 1;
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n <= 1) {
            cout << "Nhap sai, vui long nhap lai" << endl;
        }
    } while (n <= 1);
    while (i <= n) {
        if (i % 2 != 0) {
            tich *= i;
        }
        i++;
    }
    cout << "Tich so le tu 1 den " << n << " la: " << tich << endl;
    system("pause");
    return 0;
}