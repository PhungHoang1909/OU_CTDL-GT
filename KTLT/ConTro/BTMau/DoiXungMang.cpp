/*
4. Viết chương trình dùng cấp phát động xây dựng hàm nhập và
xuất 1 mảng số nguyên tối đa 15 phần tử. Sau đó xây dựng hàm
kiểm tra xem mảng vừa nhập có phải là mảng đối xứng hay
không? Viết chương trình kiểm tra các hàm trên.
*/

#include <iostream>

using namespace std;

const int N = 15;

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

void DoixungM(const int* a, int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) != a[n - 1 - i])
            dem++;
    }
    if (dem == 0)
        cout << "Mang doi xung\n";
    else
        cout << "Mang khong doi xung\n";
}

int main()
{
    int a[N], n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int* p;
    p = new int[n];
    nhapM(p, n);
    cout << "Xuat mang:\n";
    xuatM(p, n);
    DoixungM(p, n);
    delete [] p;
    p = nullptr;
    return 0;
}