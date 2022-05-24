#include<iostream>

using namespace std;

int main()
{
    int n;
    int trituyetdoi;
    cout << "Nhap so nguyen: ";
    cin >> n;
    if (n >= 0) {
        trituyetdoi = n;
    } else {
        trituyetdoi = -n;
    }
    cout << "Tri tuyet doi cua " << n << " la: " << trituyetdoi << endl;
    system("pause");
    return 0;
}