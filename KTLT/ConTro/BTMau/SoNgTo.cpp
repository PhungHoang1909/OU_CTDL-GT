/*
3. Viết chương trình dùng cấp phát động để nhập, xuất 1 mảng số
nguyên gồm m hàng và n cột. Đếm xem mảng đang lưu trữ có bao
nhiêu số là số nguyên tố?
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

const int N = 20;

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

void nhapM(int** a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(a + i) + j) = rand () % 10;
        }
    }
}

void XuatM(int** a, int m, int n)
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

int main()
{
    int a[N][N];
    int m, n;
    int** p;
    cout << "Nhap so dong va so cot: ";
    cin >> m >> n;
    p = new int* [m];
    for (int i = 0; i < m; i++)
        p[i] = new int [n];
    cout << "Xuat mang: \n";
    nhapM(p, m, n);
    XuatM(p, m, n);
    int dem = 0;
    for (int i = 0; i < m ; i++)
    {
        for (int j = 0; j < n; j++)
            if (KTNT(a[i][j]))
                dem++;
    }
    cout << "Mang co " << dem << " so nguyen to.\n";
    for (int i = 0; i < m; i++)
        delete [] p[i];
    delete p;
    p = NULL;
    return 0;
}