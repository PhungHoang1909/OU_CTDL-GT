// Sắp xếp mảng

#include <iostream>
#include <cstdlib>

using namespace std;

void hoandoi(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void xepTang(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                hoandoi(a[i], a[j]);
            }
        }
    }
    return;
}

void xepGiam(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for( int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                hoandoi(a[i], a[j]);
            }
        }
    }
    return;
}

void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << " " << a[i];
}

int main()
{
    const int max = 100;
    int a[max], n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        a[i] = rand()%20;
        cout << " " << a[i];
    }
    cout << "\nMang xep tang: " << endl;
    xepTang(a, n);
    xuatMang(a, n);
    cout << "\nMang xep giam: " << endl;
    xepGiam(a, n);
    xuatMang(a, n);
    cout << endl;
    system("pause");
    return 0;
}
