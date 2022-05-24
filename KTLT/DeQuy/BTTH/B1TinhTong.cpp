#include <iostream>

using namespace std;

int TongS1(int n)
{
    if (n == 1)
        return 1;
    else
        return n + TongS1(n - 1);
}

int TongS2(int n)
{
    if (n == 1)
        return 1;
    else
        return (n*n) + TongS2(n - 1);
}

double TongS3(int n)
{
    if (n == 1)
        return 1;
    else
        return 1.0/(2*n - 1) + TongS3(n - 1);
}

int giaithua(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else 
        return n * giaithua(n - 1);
}

int TongS4(int n)
{
    if (n == 1)
        return 1;
    else
        return giaithua(n) + TongS4(n - 1);
}

int main()
{
    int n;
    do
    {
        cout << "Nhap vao so nguyen duong: ";
        cin >> n;
        if (n < 0)
            cout << "Nhap sai. Nhap lai !" << endl;
    } while (n < 0);
    cout << "Tong S1 = " << TongS1(n) << endl;
    cout << "Tong S2 = " << TongS2(n) << endl;
    cout << "Tong S3 = " << TongS3(n) << endl;
    cout << "Tong S4 = " << TongS4(n) << endl;
    return 0;
}