#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    bool tg, deu, can, vuong, vuongcan, thuong;
    cout << "Nhap vao 3 canh cua tam giac: ";
    cin >> a >> b >> c;
    tg = (a < b + c) && (b < a + c) && (c < a + b) && (a > 0) && (b > 0) && (c > 0);
    deu = (a == b) && (b == c);
    can = !deu && ((a == b) || (b == c) || (a == c));
    vuong = (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2));
    vuongcan = vuong && can;
    if (tg) {
        if (deu) {
            cout << "Tam giac deu";
        } else if (vuongcan) {
            cout << "Tam giac vuong can";
        } else if (can) {
            cout << "Tam giac can";
        } else if (vuong) {
            cout << "Tam giac vuong";
        } else {
            cout << "Tam giac thuong";
        }
    } else {
        cout << "Khong la tam giac";
    }
    cout << endl;
    system("pause");
    return 0;
}