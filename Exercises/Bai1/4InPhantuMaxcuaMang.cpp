#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[100];
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap gia tri a[" << i << "]: ";
        cin >> a[i];  
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max) {
            max = a[i];
        }
    }
    cout << "Phan tu lon nhat trong mang: " << max << endl;
    system("pause");
    return 0;
}