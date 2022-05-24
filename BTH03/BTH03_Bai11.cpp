#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;
    if (n == 0) {
        cout << "La so 0" << endl;
    } else if (n >= 0) {
        cout << "La so nguyen duong" << endl;
    } else {
        cout << "La so nguyen am" << endl;
    }
    system("pause");
    return 0;
}