/*
Viết hàm trả về vị trí xuất hiện đầu tiên của phần tử nhỏ nhất trong mảng. Hàm
nhận vào mảng số nguyên và số phần tử của mảng. Viết chương trình kiểm tra
hàm
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int timvtmin(int a[], int n)
{
    int vtmin = 0;
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            vtmin = i;
        }
    }
    return vtmin;
}

int timvtmax(int a[], int m)
{
    int vtmax = 0;
    int max = a[0];
    for (int i = 0; i < m; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
            vtmax = i;
        }
    }
    return vtmax;
}

int main()
{
    const int max = 100;
    int a[max], n;
    cout << "Nhap so phan tu trong mang: ";
    cin >> n;
    cout << "Xuat mang:";
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 20 + 1;
        cout << " " << a[i];
    }
    cout << endl;
    cout << "Vi tri xuat hien min trong mang: " << timvtmin(a, n);
    cout << endl;
    cout << "Vi tir xuat hien max cuoi cung trong mang: " << timvtmax(a, n);
    cout << endl;
    system("pause");
    return 0;
}