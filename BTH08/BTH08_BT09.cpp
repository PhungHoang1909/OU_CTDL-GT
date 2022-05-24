/*
Các hệ số của đa thức anxn + an−1xn−1 + ... + a0 được lưu trong mảng a. Viết hàm
nhận vào mảng a, bậc của đa thức n, giá trị x và trả về giá trị
*/

#include <iostream>
#include <cmath>

using namespace std;

double tinhdathuc(int a[], int n, double x)
{
    double kq = 0;
    for (int i = 0; i <= n; i++) 
    {
        kq = kq + a[i]*pow(x, i);
    }
    return kq;
}

int main()
{
    const int max = 100;
    int a[max], n;
    double x;
    cout << "Nhap bac da thuc: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        a[i] = rand()%2+1; // 1-3
        cout << " " << a[i];
    }
    cout << endl;
    cout << "Nhap gia tri x: ";
    cin >> x;
    cout << "Ket qua: " << tinhdathuc(a, n, x) << endl;
    system("pause");
    return 0;
}