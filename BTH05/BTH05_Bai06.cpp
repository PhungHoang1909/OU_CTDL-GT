#include <iostream>

using namespace std;

int main()
{
    /*
    int dai, rong;
    cout << "Nhap chieu dai: ";
    cin >> dai;
    cout << "Nhap chieu rong: ";
    cin >> rong;
    for (int d = 1; d <= dai; d++) {
        for (int r = 1; r <= rong; r++) {
            cout << " * ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
    */
    int dai, rong;
    cout << "Nhap chieu dai: ";
    cin >> dai;
    cout << "Nhap chieu rong: ";
    cin >> rong;
    for (int i = 1; i <= dai; i++) {
        for (int j = 1; j <= rong; j++) {
            cout << "*";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}