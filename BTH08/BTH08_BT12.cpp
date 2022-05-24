// Viết hàm xóa các phần tử trùng nhau trong mảng.

#include<iostream>
#include<cstdlib>

using namespace std;

void xoaPT(int a[], int &n, int k)
{
    for(int i = k; i <  - 1; i++) {
        a[i] = a[i+1];
    }
    n--;
}

void xoaTrung(int a[], int &size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if(a[i] == a[j]) {
                xoaPT(a, size, j);
                j--;
            }
        }
    }
}

int main()
{
    const int max = 100;
    int a[max], n, k;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    cout << "Mang ban dau: ";
    for (int i = 0; i <= n; i++)
    {
        a[i] = rand()%10 + 1;
        cout << " " << a[i];
    }
    cout << endl;
    cout << "Mang sau khi xoa: " << endl;
    xoaTrung(a, n);
    for (int i = 0; i <= n; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
    system("pause");
    return 0;
}