/*
Viết hàm đệ qui tính giá trị của xn ; với x, n là số nguyên. Sau đó xây dựng
chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
*/

#include <iostream>

using namespace std;

int luythua(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return x * luythua(x, n - 1);
}

double Mu(double x, int n)
{
    if (n == 0)
        return 1;
    else
        if (n > 0)
            return Mu(x, n - 1)*x;
        else
            return Mu(x, n + 1)/x;
}

int main()
{
    int x, n;
    cout << "Nhap gia tri x mu n: ";
    cin >> x >> n;
    cout << x << "^" << n << " = " << luythua(x, n) << endl;
    cout << x << "^" << n << " = " << Mu(x, n);
    return 0;
}