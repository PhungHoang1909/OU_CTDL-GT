#include <iostream>

using namespace std;

int main()
{
    /*
    int h;
    cout << "Nhap chieu cao tam giac: ";
    cin >> h;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
    */
    
    int h;
    cout << "Nhap chieu cao: ";
    cin >> h;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}