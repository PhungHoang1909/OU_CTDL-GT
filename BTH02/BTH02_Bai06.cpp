#include<iostream>

using namespace std;

int main()
{
    int so;
    int a, b, c;
    cout << "Nhap 1 so co 3 chu so: ";
    cin >> so;
    a = so / 100;
    b = (so % 100) / 10;
    c = so % 10;
    int tong = a + b + c;
    cout << "Tong 3 chu so = " << tong << endl;
    cout << "So dao nguoc la: " << c << b << a << endl;
    system("pause");
    return 0;
}