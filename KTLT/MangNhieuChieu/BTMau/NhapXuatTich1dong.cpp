#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int M = 20; int N = 10;
    int a[M][N], m, n, dong, tich = 1;
    do
    {
        cout << "Nhap vao so dong va so cot: ";
        cin >> m >> n;
        if (m <= 0 || m > 20 || n <= 0 || n > 10)
        {
            cout << "Nhap sai, nhap lai\t";
        }
    } while (m <= 0 || m > 20 || n <= 0 || n > 10);
    // Nhap mang
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
    cout << "Nhap dong can tinh tich: ";
    cin >> dong;
    for (int j = 0; j < n; j++)
    {
        tich *= a[dong][j];
    }
    cout << "Tich cua dong " << dong << " = " << tich << endl;
    return 0;
}