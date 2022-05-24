/*
Viết hàm đếm số lần xuất hiện của một phần tử trong một mảng số nguyên. Hàm
nhận vào ba tham số: mảng a, số phần tử n và phần tử x. Hàm trả về số lần xuất
hiện của x trong mảng a. Viết chương trình kiểm tra hàm.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int DemSLXH(int a[], int n, int x);

int main()
{
    int a[100], n, x;
    cout << "Nhap so phan tu: ";
    cin >> n;
    cout << "Xuat mang: ";
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%20 + 1;
        cout << " " << a[i];
    }
    cout << endl;
    cout << "Nhap phan tu x: ";
    cin >> x;
    cout << "So lan phan tu " << x << " xuat hien trong mang la: " << DemSLXH(a, n, x) << endl;
    system("pause");
    return 0;
}

int DemSLXH(int a[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (x == a[i]) {
            count++;
        }
    }
    return count;
}