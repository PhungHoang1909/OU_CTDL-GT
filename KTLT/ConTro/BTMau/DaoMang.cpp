/*
2. Viết chương trình dùng cấp phát động cho nhập vào mảng 1
chiều gồm các số nguyên (tối đa 20 phần tử). Sau đó tiến hành
đảo ngược mảng vừa nhập. Xuất lại mảng cho người dùng kiểm
tra.
*/

#include <iostream>

using namespace std;

const int N = 20;

void nhapM(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> *(a + i);
    }
}

void xuatM(const int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void hoanvi(int* a, int* b)
{
    int tam = *a;
    *a = *b;
    *b = tam;
}

void daoM(int* a, int n)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        hoanvi((a + l), (a + r));
        l++;
        r--;
    }  
}

int main()
{
    int n;
    int* p;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    p = new int[n];
    nhapM(p, n);
    xuatM(p, n);
    cout << "Dao nguoc mang:\n";
    daoM(p, n);
    xuatM(p, n);
    delete [] p;
    p = nullptr;
    return 0;
}