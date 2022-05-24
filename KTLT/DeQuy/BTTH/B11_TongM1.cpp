/*
Viết hàm đệ qui tính tổng các giá trị của một mảng 1 chiều lưu trữ số
nguyên. Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

const int N = 20;

int TongM(int a[], int n)
{
    if (n == 1)
        return a[0];
    else 
        return a[n - 1] + TongM(a, n - 1);
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
    cout << "Tong cac phan tu trong mang: " << TongM(a, n);
    return 0;
}