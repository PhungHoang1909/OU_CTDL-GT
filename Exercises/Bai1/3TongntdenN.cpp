// Tong nguyen to nho hon n

#include <iostream>
#include <cmath>

using namespace std;

bool ktsonguyento(int n)
{
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= sqrt(float(n)); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, tong = 0;
    cout << "Nhap vao so nguyen: ";
    cin >> n;
    for (int i = 2; i <= sqrt(float(n)); i++)
    {
        if (ktsonguyento(i) == true) {
            tong+=i;
        }
    }
    cout << "Tong nguyen to tu 1 den " << n << " la: " << tong << endl;
    system("pause");
    return 0;
}