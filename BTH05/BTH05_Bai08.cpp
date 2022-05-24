#include <iostream>

using namespace std;

int main()
{
    int n;
    int tong = 0;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
    if (n <= 0) {
        cout << "n khong hop le" << endl;
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                tong += i;
            }
        }
         cout << "Tong = " << tong << endl;
    }
    system("pause");
    return 0;
}