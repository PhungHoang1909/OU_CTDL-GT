#include <iostream>

using namespace std;

int main()
{
    int h;
    cout << "Nhap chieu cao tam giac: ";
    cin >> h;
    cout << "Cau a: " << endl;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == 1 || i == h) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "Cau b: " << endl;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= h; j++) {
            if (j < h - i + 1) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << "Cau c: " << endl;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= h; j++) {
            if (j <= h - i + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "Cau d: " << endl;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <=h; j++) {
            if (j < i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << "Cau e: " << endl;
    int l = h;
    int r = h;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= h; j++) {
            if (j >= 1 && j <= r)
            {
                cout << "*";
                cout << "  ";
            } else {
                cout << " ";
            }
        }
        l--;
        r++;
        cout << endl;
    }
    system("pause");
    return 0; 
}