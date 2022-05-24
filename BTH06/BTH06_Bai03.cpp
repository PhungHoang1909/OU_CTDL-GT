// Viết hàm tính x^y (x là số thực, y là số nguyên) và chương trình kiểm tra hàm

#include <iostream>
#include <cmath>

using namespace std;

double luythua(double x, int y)
{
    double luythua;
    luythua = pow(x, y);
    return luythua;
}

int main()
{
    int a, b;
    cout << "Nhap vao 2 so nguyen: ";
    cin >> a >> b;
    cout << "Luy thua " << a << "^" << b << " la: " << luythua(a, b) << endl;
    system("pause");
    return 0;
}