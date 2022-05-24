/*
Tach chu so
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, n1, chuso;
    cout << "Nhap vao so nguyen: ";
    cin >> n;
    while(n > 0)
    {
        chuso = n % 10;
        n1 = n1 * 10 + chuso;
        n /= 10;
    }
    cout << "Ket qua: ";
    while(n1 > 0)
    {
        chuso = n1 % 10;
        cout << chuso << " ";
        n1/=10;
    }
    cout << endl;
    system("pause");
    return 0;
}