#include <iostream>
#include <cstdlib>

using namespace std;

void Tao_M_NN(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i]=rand() % 20 + 1;
    }
}

void Xuat_M(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int VT_Max(int a[], int n)
{
    int vtmax = 0;
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if(a[i] >= max) {
            max = a[i];
            vtmax = i;
        }
    }
    return vtmax;
}

void hoanvi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Mang_giam(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                hoanvi(a[i], a[j]);
            }
        }
    }
}


int main()
{
    const int MAX = 100;
    int a[MAX], n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    cout << "Xuat mang: " << endl;
    Tao_M_NN(a, n);
    Xuat_M(a, n);
    cout << endl;
    cout << "Vi tri pt max dau tien: " << VT_Max(a, n) << endl;
    cout << "Mang xep giam: " << endl;
    Mang_giam(a, n);
    Xuat_M(a, n);
    cout << endl;
    system("pause");
    return 0;
}
