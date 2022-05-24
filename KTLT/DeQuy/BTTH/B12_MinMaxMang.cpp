/*
Viết hàm đệ qui tìm giá trị nhỏ nhất của một mảng 1 chiều lưu trữ số
nguyên. Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
*/

#include <iostream>
#include <cstdlib>

using namespace std;
const int N = 20;

int timMin(int a[], int n)
{
    if (n == 1)
        return a[0];
    else
    {
        if (a[n - 1] < timMin(a, n - 1))
            return a[n - 1];
        else
            return timMin(a, n - 1);
    }
}

int timMax(int a[], int n)
{
    if (n == 1)
        return a[0];
    else
    {
        if (a[n - 1] > timMax(a, n - 1))
            return a[n - 1];
        else
            return timMax(a, n - 1);
    }
}

int main()
{
    int a[N], n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    cout << "Xuat mang:\n";
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Gia tri min = " << timMin(a, n) << endl;
    cout << "Gia tri max = " << timMax(a, n) << endl;
    return 0;
}