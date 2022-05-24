#include<iostream>

using namespace std;

int main() 
{
    int a, b;
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so nguyen b: ";
    cin >> b;
    if (a == b) {
        cout << "a va b bang nhau" << endl;
    } else if (a > b) {
        cout << "a lon hon b" << endl;
    } else {
        cout << "b lon hon a" << endl;
    }
    system("pause");
    return 0;
}