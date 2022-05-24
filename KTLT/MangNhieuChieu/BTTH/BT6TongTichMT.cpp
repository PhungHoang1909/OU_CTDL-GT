#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int N = 10;
    int a[N][N], b[N][N], c[N][N], d[N][N], n;
    cout << "Nhap vao cap cua mt vuong A B : ";
    cin >> n;
    cout << "Xuat mt A: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Xuat mt B: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = rand() % 10;
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Xuat ma tran tong C: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Xuat ma tran tich D: " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         c[i][j] = 0;
    //         for (int k = 0; k < n; k++)
    //         {
    //             c[i][j] += a[i][k] * b[k][j];
    //         }
    //         cout << c[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            d[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                d[i][j] += a[i][k] * b[k][j];
            }
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}