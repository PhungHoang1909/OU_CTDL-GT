#include <iostream>

using namespace std;

// cau a: Xay dung ham nhap xuat

const int M = 20, N = 10;

void nhapM(int a[][N], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> a[i][j]; 
        }
    }
}

void xuatM(int a[][N], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// cau b: Tinh gia tri trung binh cong

int TBC(int a[][N], int m, int n)
{
    int tong = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tong += a[i][j];
        }
    }
    return tong/m*n;   
}

// cau c: Kiem tra x co ton tai trong mang hay khong

bool KT(int a[][N], int m, int n, int x, int vti, int vtj)
{
    bool kq = false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == x) 
            {
                kq = true;
                vti = i;
                vtj = j;
                break;
            }
        }
    }
    return kq;
}

// cau d: Hoan doi gia tri x y co trong mang

// void hoanvi(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void hoandoi(int a[][N], int m, int n, int x, int y)
// {
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (timX(a, m, n, x))
//             {
//                 hoanvi(a[i][j], y);
//             } else if (timX(a, m, n, y))
//             {
//                 hoanvi(a[i][j], x);
//             }
//         }
//     }
//     cout << "Mang sau khi hoan doi: " << endl;
//     xuatM(a, m, n);
// }

// cau d: Hoan doi gia tri x y co trong mang

void Doiso(int a[][N], int m, int n, int &x, int &y)
{
    int vtxi, vtxj, vtyi, vtyj, tam;
    if(KT(a, m, n, x, vtxi, vtxj) && KT(a, m, n, y, vtyi, vtyj))
    {
        tam = a[vtxi][vtxj];
        a[vtxi][vtxj] = a[vtyi][vtyj];
        a[vtyi][vtyj] = tam;
    } 
    else
        cout << "Khong doi duoc" << endl;
}

// Cau e: Tinh tich gia tri cua 1 cot
int tichCot(int a[][N], int m, int n, int cot)
{
    int tich = 1;
    for (int i = 0; i < m; i++)
    {
        tich *= a[i][cot];
    }
    return tich;
}

// Cau f: Viet chuong trinh main
int main()
{
    const int M = 20, N = 10;
    int a[M][N], m, n, gtx, x, y, cot, vtxi, vtxj, vtyi, vtyj;
    cout << "Nhap vao so dong va so cot can tinh: ";
    cin >> m >> n;
    nhapM(a, m, n);
    xuatM(a, m, n);
    cout << "Nhap gia tri x can tim: ";
    cin >> gtx;
    if (KT(a, m, n, gtx, vtxi, vtxj))
    {
        cout << "Tim thay x " << endl;
    } else {
        cout << "Khong ton tai x" << endl;
    }
    cout << "Nhap gia tri x va y can hoan doi trong mang: ";
    cin >> x >> y;
    Doiso(a, m, n, x, y);
    cout << "Mang sau khi hoan doi: ";
    xuatM(a, m, n);
    cout << "Nhap cot can tinh tich: ";
    cin >> cot;
    cout << "Tich cua cot " << cot << " la: " << tichCot(a, m, n, cot) << endl;
    return 0;
}
