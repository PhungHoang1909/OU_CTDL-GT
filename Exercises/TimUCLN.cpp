#include<iostream>

using namespace std;

int UCLN(int a, int b)
{
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Nhap 2 so a va b: ";
    cin >> a >> b;
    cout << "Uoc chung lon nhat la: " << UCLN(a, b);
    return 0;
}