#include <iostream>

using namespace std;

int main() 
{
    int a, b;
    cout << "Nhap 2 so nguyen: ";
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "phuong trinh vo so nghiem" << endl;
        } else {
            cout << "phuong trinh vo nghiem" << endl;
        }
    }
    if (a != 0) {
        double nghiem = (double)-b/a;
        cout << "phuong trinh co nghiem x = " << nghiem << endl;
    }
    system("pause");
    return 0;
}