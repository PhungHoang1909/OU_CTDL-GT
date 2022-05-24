#include<iostream>

using namespace std;

int main()
{
    const double pi = 3.141593;
    double r;
    double chuvi, dientich;
    cout << "Nhap ban kinh r: ";
    cin >> r;
    chuvi = 2 * pi * r;
    dientich = pi * r * r;
    cout << "Chu vi hinh tron = " << chuvi << endl;
    cout << "Dien tich hinh tron = " << dientich << endl;
    system("pause");
    return 0;
}