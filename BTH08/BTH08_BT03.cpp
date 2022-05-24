/*
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử), tìm và in ra
phần tử lớn nhất va nho nhat cua mang.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a[100], n, max, min;
    cout << "Nhap so phan tu: ";
    cin >> n;
    cout << "Xuat mang: ";
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%100;
        cout << " " << a[i];
    }
    cout << endl;
    max = a[0];
    min = a[0];
    for (int i = 0; i < n; i++) 
    {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    cout << "Phan tu lon nhat: " << max << endl;
    cout << "Phan tu nho nhat: " << min << endl;
    system("pause");
    return 0;
}

/* Tìm phần tử lớn thứ 2 của mảng:

#include <iostream>
// #include <cmath>
// #include <iomanip>
#include <cstdlib>

using namespace std;

void hoanvi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void SapXep(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                hoanvi(a[i], a[j]);
            }
        }
    }
}

int TimSMax(int a[], int n)
{
    SapXep(a, n);
    return a[1];
}

int main()
{
    const int max = 100;
    int a[max], n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 20;
        cout << a[i] << " ";
    }
    cout << endl;
    cout << TimSMax(a, n);
    return 0;
}

*/