#include <iostream>

using namespace std;

int main()
{
    /*
    int a;
    cout << "Nhap do dai canh: ";
    cin >> a;
    // câu a:
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a; j++) {
            cout << " * ";
        }
        cout << endl;
    }
    // câu b:
    cout << "       " << endl;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a; j++) {
            if (i == 1 || j == 1 || i == a || j == a ) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
    */

    int n;
    cout << "Nhap canh hinh vuong: ";
    cin >> n;
    cout << "Cau a: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*"; 
        }
        cout << endl;
    }
    cout << "Cau b: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j ++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
