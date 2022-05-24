#include <iostream>

using namespace std;

int main()
{
    int n;
    int giaithua = 1;
    cout << "Nhap so can tinh giai thua: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        giaithua *= i;
    }
    cout << "Giai thua cua " << n << " la: " << giaithua << endl;
    system("pause");
    return 0;
}