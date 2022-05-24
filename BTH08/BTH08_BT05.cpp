/*
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử) và vị trí của
phần tử cần xóa, xóa phần tử tại vị trí đã nhập và in ra mảng sau khi xóa
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a[100], n, k;
    cout << "Nhap so phan tu: ";
    cin >> n;
    cout << "Xuat mang: ";
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%10+1;
        cout << " " << a[i];
    }
    cout << endl;
    cout << "Nhap vi tri can xoa: ";
    cin >> k;
    for (int i = k; i < (n-1); i++)
    {
        a[i] = a[i+1];
    }
    n--;
    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < n; i++) {
        cout << " " << a[i];
    }
    cout << endl;
    system("pause");
    return 0;
}