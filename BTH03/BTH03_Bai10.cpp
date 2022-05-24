#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n << " la so chan" << endl;
    } else {
        cout << n << " la so le" << endl;
    }
    system("pause");
    return 0;
}