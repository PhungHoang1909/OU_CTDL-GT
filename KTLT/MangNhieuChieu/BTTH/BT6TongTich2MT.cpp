#include <iostream>
using namespace std;

const int M = 20, N = 10;

void nhap(int a[][N], int m, int n);
void xuat(int a[][N], int m, int n);
void tinhTong(int a[][N], int b[][N], int kq[][N], int m, int n);
void tinhTich(int a[][N], int b[][N], int kq[][N], int m1, int n1, int n2);

int main()
{
    int a1[M][N], a2[M][N];
    int tong[M][N], tich[M][N];
    // Nhap 2 Ma Tran
    int m1, n1, m2, n2;

    // Ma Tran A1:
    do
    {
        cout << "Nhap so dong cua A1: ";
        cin >> m1;
        if (m1 <= 0 || m1 > M)
            cout << "Nhap sai. Nhap lai\n";
    } while (m1 <= 0 || m1 > M);
    do
    {
        cout << "Nhap so cot cua A1: ";
        cin >> n1;
        if (n1 <= 0 || n1 > M)
            cout << "Nhap sai. Nhap lai\n";
    } while (n1 <= 0 || n1 > M);
    cout << "+ Nhap gia tri cho A1: " << endl;
    nhap(a1, m1, n1);

    // Ma Tran A2:
    do
    {
        cout << "Nhap so dong cua A2: ";
        cin >> m2;
        if (m2 <= 0 || m2 > M)
            cout << "Nhap sai. Nhap lai\n";
    } while (m2 <= 0 || m2 > M);
    do
    {
        cout << "Nhap so cot cua A2: ";
        cin >> n2;
        if (n2 <= 0 || n2 > M)
            cout << "Nhap sai. Nhap lai\n";
    } while (n2 <= 0 || n2 > M);
    cout << "+ Nhap gia tri cho A2: " << endl;
    nhap(a2, m2, n2);

    // Xuat 2 ma tran
    cout << "Mang A1:\n";
    xuat(a1, m1, n1);
    cout << "Mang A2:\n";
    xuat(a2, m2, n2);    

    // Tinh Tong 2 Ma Tran
    if (m1 == m2 && n1 == n2)
    {
        tinhTong(a1, a2, tong, m1, n1);
        cout << "Tong 2 ma tran la:\n";
        xuat(tong, m1, n1);
    } else 
        cout << "Khong the tinh tong 2 ma tran tren" << endl;

    // Tinh Tich 2 Ma Tran
    if (n1 == m2)
    {
        tinhTich(a1, a2, tich, m1, n1, n2);
        cout << "Tich 2 ma tran la:\n";
        xuat(tich, m1, n2);
    } else
        cout << "Khong the tinh tich 2 ma tran:\n";
    return 0;
}

void nhap(int a[][N], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        cout << "Nhap " << m + 1 << " so nguyen cho dong thu " << i + 1 << ": ";
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void xuat(int a[][N], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void tinhTong(int a[][N], int b[][N], int kq[][N], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            kq[i][j] = a[i][j] + b[i][j];
        }
    }
}

void tinhTich(int a[][N], int b[][N], int kq[][N], int m1, int n1, int n2)
{
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            kq[i][j] = 0;
            for (int k = 0; k < n1; k++)
            {
                kq[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}