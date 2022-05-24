#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int M = 10; int N = 5;
    int a[M][N], m, n, x, dem = 0, vti, vtj;
    cout << "Nhap so dong va so cot: ";
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
        }
    }
    cout << "Xuat mang: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }   
    cout << "Nhap phan tu can tim: ";
    cin >> x;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == x) 
            {
                dem++;
                if (dem == 1)
                {
                    vti = i;
                    vtj = j;
                }
            }
            // if (dem == 1)
            // {
            //     vti = i;
            //     vtj = j;
            // }
            // Neu tim vi tri xuat hien cuoi cung:
            // if (a[i][j] == x)
            // {
            //     dem++;
            //     vti = i;
            //     vtj = j;
            // }
        }
    }
    if (dem <= 0) 
    {
        cout << "Khong tim thay " << x << endl;
    } else {
        cout << "Tim thay " << x << " " << dem << " lan tai dong " << vti << " cot " << vtj << endl;
    }
    return 0;
}