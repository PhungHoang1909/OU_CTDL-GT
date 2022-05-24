#include <iostream>
using namespace std;

int main()
{
    const int M = 5, N = 6;
    int a[M][N], m, n;

    // cau a
    do
    {
        cout << "Nhap vao so dong va so cot: ";
        cin >> m >> n;
        if (m <= 0 || m > 5 || n <= 0 || n > 6)
        {
            cout << "Nhap sai, nhap lai\t";
        }
    } while (m <= 0 || m > 5 || n <= 0 || n > 6);  

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
    int dong, cot;
    do
    {
        cout << "Nhap vao so dong va so cot can tinh tong: ";
        cin >> dong >> cot;
        if (dong < 0 || cot < 0 || dong > n - 1 || cot > n - 1)
            cout << "Khong hop le! Vui long nhap lai" << endl;
    } while (dong < 0 || cot < 0 || dong > n - 1 || cot > n - 1);
    int tongdong, tongcot;
    tongdong = tongcot = 0;
    // Tinh tong dong: (dong co dinh chay tu cot)
    for (int j = 0; j < n; j++)
    {
        tongdong += a[dong][j];
    }
    // Tinh tong cot: (Cot co dinh chay tu dong)
    for (int i = 0; i < m; i++)
    {
        tongcot += a[i][cot];
    }
    cout << "Tong dong " << dong << " = " << tongdong << endl;
    cout << "Tong cot " << cot << " = " << tongcot << endl;
     
    // cau c:
    int x, dem = 0, vti, vtj;
    cout << "Nhap gia tri x can tim: ";
    cin >> x;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == x) 
            {
                dem++;
                vti = i;
                vtj = j;
                cout << "Xuat hien tai dong " << vti << endl;
                cout << "Xuat hien tai cot " << vtj << endl;
            }
        }
    }
    if (dem <= 0)
        cout << "Khong tim thay " << x << endl;
    else
    {
        cout << "Tim thay " << x << " " << dem << " lan " << endl;
    }
    return 0;
}