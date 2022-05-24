#include <iostream>
#include <cstdlib>

using namespace std;

const int N = 20;

void TaoM(int a[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
        }
    }
}

void XuatM(int a[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void TongM(int a[][N], int b[][N], int n)
{
    int c[N][N];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

void TichM(int a[][N], int b[][N], int n)
{
    int d[N][N];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            d[i][j] = 0;
            d[i][j] += a[i][j] * b[i][j];
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[N][N], b[N][N], c[N][N], d[N][N], n;
    cout << "Nhap vao cap cua ma tran vuong: ";
    cin >> n;
    TaoM(a, n);
    TaoM(b, n);
    cout << "Xuat ma tran A: " << endl;
    XuatM(a, n);
    cout << "Xuat ma tran B: " << endl;
    XuatM(b, n);
    cout << "Xuat ma tran tong C: " << endl;
    TongM(a, b, n);
    cout << "Xuat ma tran tich D: " << endl;
    TichM(a, b, n);
    return 0;
}