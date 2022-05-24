#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int M = 10, N = 20;
    int a[M][N], m, n, tong = 0;
    // cau a
    do
    {
        cout << "Nhap vao so dong va so cot: ";
        cin >> m >> n;
        if (m <= 0 || m > 10 || n <= 0 || n > 20)
        {
            cout << "Nhap sai, nhap lai\t";
        }
    } while (m <= 0 || m > 10 || n <= 0 || n > 20);

    cout << "Xuat mang: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    // cau b
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tong += a[i][j];
        }
    }
    cout << "Tong mang: " << tong << endl;
    
    // cau c + d
    int gtmin, gtmax, vtmini, vtminj, vtmaxi, vtmaxj;
    gtmin = gtmax = a[0][0];
    vtmini = vtminj = vtmaxi = vtmaxj = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < gtmin)
            {
                gtmin = a[i][j];
                vtmini = i;
                vtminj = j;
            } else if (a[i][j] > gtmax)
            {
                gtmax = a[i][j];
                vtmaxi = i;
                vtmaxj = j;
            }
        }
    }    
    cout << "Mang co gia tri min = " << gtmin << " Tai dong " << vtmini << " cot " << vtminj << endl;
    cout << "Mang co gia tri max = " << gtmax << " Tai dong " << vtmaxi << " cot " << vtmaxj << endl;

    return 0;
}