#include <iostream>
#include <cmath>
using namespace std;

int tinhTong(int n)
{
    if (n == 1)
        return 1;
    else 
        return (pow(n, 2)) + tinhTong(n - 1);
}

int main()
{
    int n;
    do
    {
        cout << "Nhap vao so nguyen n: ";
        cin >> n;
        if (n < 0)
            cout << "Nhap sai. Nhap lai !\n";
    } while (n < 0);
    cout << "Tong S = " << tinhTong(n) << endl;
    return 0;
}