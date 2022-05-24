// Đếm số lần xuất hiện phần tử trong mảng

#include <iostream>
#include <cstdlib>

using namespace std;

void demPT(int a[], int &n)
{
    int dem;
    for (int i = 0; i < n; i++)
    {
        dem = 1;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (a[i] == a[j]) {
                dem++;
                for (int k = j; k < n - 1; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
                j--;
            }
        }
        cout << a[i] << " So phan tu: " << dem << endl;
    }
}

int main()
{
    const int max = 100;
    int a[max], n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 9 + 1;
        cout << " " << a[i];
    }
    cout << endl;
    cout << "So lan xuat hien: " << endl;
    demPT(a, n);
    cout << endl;
    system("pause");
    return 0;
}