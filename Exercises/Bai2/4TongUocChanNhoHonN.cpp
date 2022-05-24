#include <iostream>

using namespace std;

int main()
{
    int n;
    int tong = 0;
    cout << "Nhap so nguyen: ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) {
            if (i % 2 == 0) {
                tong += i;
            }
        }
    }
    cout << "Tong = " << tong << endl;
    system("pause");
    return 0;
}