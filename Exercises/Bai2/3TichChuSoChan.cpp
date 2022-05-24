#include <iostream>

using namespace std;

int main()
{
    int n;
    int tich = 1;
    int chuso;
    do 
    {
        cout << "Nhap vao so nguyen: ";
        cin >> n;
        if (n < 0) {
            cout << "Nhap sai, nhap lai !" << endl;
        }
    } while (n < 0);
    int tam = n;
    while (tam > 0)
    {
        chuso = tam % 10;
        tam /= 10;
        if (chuso % 2 == 0) {
            tich *= chuso;
        }
    }
    cout << "Tich chu so le: " << tich << endl;
    system("pause");
    return 0;
}