/*

Viết chương trình yêu cầu nhập vào góc x theo độ, sau đó in ra sin,cos,tan của x.
Hướng dẫn: Đổi x sang radians (x ∗ π/180), dùng hàm toán học trong thư viện.

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int sodo;
    cout << "Nhap so do cua x: ";
    cin >> sodo;
    double x = (sodo * 3.14 / 180);
    cout << "Sin(x) = " << fixed << setprecision(2) << sin(x) << endl;
    cout << "Cos(x) = " << fixed << setprecision(2) << cos(x) << endl;
    cout << "Tan(x) = " << fixed << setprecision(2) << tan(x) << endl;
    system("pause");
    return 0;
}