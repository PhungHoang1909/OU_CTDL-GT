#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x1, y1;
    int x2, y2;
    double d;
    cout << "Nhap toa do diem 1: ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem 2: ";
    cin >> x2 >> y2;
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Khoang cach giua 2 diem = " << fixed << setprecision(1) << d << endl;
    system("pause");
    return 0;
}