#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int a, b, c;
    double p;
    double dientich;
    cout << "Nhap do dai 3 canh cua tam giac: ";
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    dientich = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Dien tich tam giac = " << dientich << endl;
    system("pause");
    return 0;
}