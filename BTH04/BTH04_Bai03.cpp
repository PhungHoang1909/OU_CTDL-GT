/* Viết chương trình nhận vào 1 số nguyên dương n > 1. Tính và xuất ra màn hình
kết quả tổng các số lẻ và tổng các số chẵn trong phạm vi từ 1 đến n. */

#include <iostream>

using namespace std;

int main()
{
    int n;
    int tongchan = 0;
    int tongle = 0;
    int i = 1;
    do {
        cout << "Nhap vao so nguyen duong: ";
        cin >> n;
        if (n <= 1) {
            cout << "Nhap sai, vui long nhap lai" << endl;
        }
    } while (n <= 1);
    while (i <= n)
    {
        if (i % 2 == 0) {
            tongchan += i;
        } else {
            tongle += i;
        }
        i++;
    }
    cout << "Tong chan tu 1 den " << n << " la: " << tongchan << endl;
    cout << "Tong le tu 1 den " << n << " la: " << tongle << endl;
    system("pause");
    return 0;
}