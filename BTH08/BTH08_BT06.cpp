/*
Viết chương trình gồm các hàm sau đây:
a) Nhập một dãy số nguyên vào mảng arr, số phần tử nhập vào là arrSize:
void nhap(int arr[], int arrSize);
b) In dãy số nguyên trong arr, cách nhau bởi dấu phẩy, arrSize là số phần tử của
dãy:
void xuat(const int arr[], int arrSize);
c) Tìm một giá trị x trong mảng arr, trả về true tìm thấy, ngược lại trả về false,
arrSize là số phần tử của mảng:
bool tim(const int arr[], int arrSize, int x);
d) Đảo ngược các phần tử trong mảng arr, arrSize là số phần tử của mảng:
void daonguoc(int arr[], int arrSize)
e) Xóa phần tử tại một vị trí p trong mảng arr, arrSize là số phần tử của mảng:
void xoa(int arr[], int& arrSize, int p)
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void nhap(int a[], int n);
void xuat(int a[], int n);
bool tim(int a[], int n, int x, int &vt);
void hoanvi(int &a, int &b);
void daonguoc(int a[], int n);
void xoa(int a[], int &n, int p);

int main()
{
    int a[100], n, x, p, vt;
    cout << "Nhap so phan tu: ";
    cin >> n;
    nhap(a, n);
    cout << endl;
    cout << "Xuat mang: " << endl;
    xuat(a, n);
    cout << endl;
    cout << "Nhap gia tri can tim x: ";
    cin >> x;
    if (tim(a, n, x, vt)) {
        cout << "Tim thay " << x << " tai vi tri: " << vt;
    } else {
        cout << "Khong tim thay x";
    }
    cout << endl;
    cout << "Mang dao nguoc: " << endl;
    daonguoc(a, n);
    xuat(a, n);
    cout << endl;
    cout << "Nhap vi tri p can xoa: ";
    cin >> p;
    xoa(a, n, p);
    cout << "Mang da xoa: " << endl;
    xuat(a, n);
    cout << endl;
    system("pause");
    return 0;
}

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%20 + 1;
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if ( i < n- 1) {
            cout << ", ";
        }
    }
}

bool tim(int a[], int n, int x, int &vt)
{
    int i = 0;
    bool kq = false;
    while (i < n && a[i] != x) {
        i++;
    }
    if (i < n)
    {
        kq = true;
        vt = i;
    }
    return kq;
}

void hoanvi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void daonguoc(int a[], int n)
{
    int l = 0, r = n - 1;
    while (l<r)
    {
        hoanvi(a[l], a[r]);
        l++;
        r--;
    }
}

void xoa(int a[], int &n, int p)
{
    for (int i = p; i < n - 1; i++)
    {
        a[i] = a[i+1];
    }
    n--;
}