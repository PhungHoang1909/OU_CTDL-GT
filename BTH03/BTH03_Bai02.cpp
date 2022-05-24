#include<iostream>

using namespace std;

int main() 
{
    int a, b;
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so nguyen b: ";
    cin >> b;
    int max = 0;
    if (a >= b) {
        max = a;
    } else {
        max = b;
    }
    cout << "So lon nhat la: " << max << endl;
    system("pause");
    return 0;
}