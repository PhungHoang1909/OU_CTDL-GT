// tách chữ số vd: n = 1234 -> kq: 1 2 3 4 (n > 0)

#include <iostream>

using namespace std;

int main()
{
    int n;
    int chuso;
    int n1;
    do
    {
        cout << "Nhap vao so nguyen: ";
        cin >> n;
        if (n <= 0) {
            cout << "Nhap sai, vui long nhap lai!";
        }
    } while (n <= 0);

    while (n > 0)
    {
        chuso = n % 10;
        n1 = n1 * 10 + chuso;
        n /= 10;
    }

    cout << "Ket qua: ";
    while (n1 > 0)
    {
        chuso = n1 % 10;
        cout << chuso << " ";
        n1 /= 10;
    }
    cout << endl;
    system("pause");
    return 0;
}