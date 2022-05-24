#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int temp;
    cout << "Nhap 3 so nguyen: ";
    cin >> a >> b >> c;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    cout << "Ket qua sap xep tang dan: " << a << " " << b << " " << c << " " << endl;
    system("pause");
    return 0;
}