/*
Viết chương trình dùng cấp phát động để xây dựng hàm
nhập, xuất 1 mảng số nguyên gồm m hàng và n cột, hàm trả về
vị trí lưu trữ của giá trị đầu tiên trong mảng là số nguyên tố. Viết
chương trình kiểm tra các hàm trên.
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

const int N = 20;

void nhapM(int** p, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(p + i) + j) = rand() % 10;
        }
    }
}

void xuatM(int** p, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}

bool KTNT(int n)
{
    if (n < 2)
        return false;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

void VTNT(int** p, int m, int n)
{
    int vti, vtj;
    int dem = 0;
    for (int i = 0; i < m ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (KTNT(p[i][j]))
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
        }
    }
    if (dem > 0)
        cout << "Tim thay so ng to tai dong " << vti << " cot " << vtj;
    else
        cout << "Khong tim thay so ng to";
}
int main()
{
    int a[N][N], m, n;
    cout << "Nhap so dong va so cot: ";
    cin >> m >> n;
    int** p;
    p = new int* [m];
    for (int i = 0; i < m; i++)
        p[i] = new int [n];
    cout << "Xuat mang:\n";
    nhapM(p, m, n);
    xuatM(p, m, n);
    VTNT(p, m, n);
    for (int i = 0; i < m; i++)
        delete [] p[i];
    delete p;
    p = nullptr;
    return 0;
}