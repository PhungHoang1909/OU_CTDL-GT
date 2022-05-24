#include<iostream>

using namespace std;

int main()
{
    int n;
    int tong = 0;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    for (int i = 1; i <= n; i++ ) {
        tong += i;
    }
    cout << "Tong tu 1 den " << n << " la: " << tong << endl;
    system("pause");
    return 0;
}