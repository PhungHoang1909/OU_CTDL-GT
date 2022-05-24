/*
a. void menu(): hiển thị menu gồm 4 phép tính cộng, trừ, nhân, chia
b. int cong(int a, int b): cộng hai số nguyên
c. int tru(int a, int b): trừ hai số nguyên.
d. double chia(int a, int b): chia hai số nguyên.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void menu()
{
    cout << "1. Cong" << endl;
    cout << "2. Tru" << endl;
    cout << "3. Nhan" << endl;
    cout << "4. Chia" << endl;
}

int cong(int a, int b)
{
    return a + b;
}

int tru(int a, int b)
{
    return a - b;
}

int nhan(int a, int b)
{
    return a * b;
}

double chia(int a, int b)
{
    return (double)a/b;
}

int main()
{
    int chon, a, b;
    char c;
    bool ketthuc = true;
    do 
    {
        system("cls");
        menu();
        cout << endl;
        cout << "Nhap 2 so nguyen: ";
        cin >> a >> b;
        cout << "Chon (1-4): ";
        cin >> chon;
        switch(chon)
        {
            case 1:
            {
                cout << a << " + " << b << " = " << cong(a, b) << endl;
                break;
            }
            case 2:
            {
                cout << a << " - " << b << " = " << tru(a, b) << endl;
                break;
            }
            case 3:
            {
                cout << a << " * " << b << " = " << nhan(a, b) << endl;
                break;
            }
            case 4:
            {
                if (b != 0) {
                    cout << a << " / " << b << " = " << setprecision(2) << fixed << chia(a, b) << endl;
                } else {
                    cout << "loi chia 0" << endl;
                }
                break;
            }
        }
        cout << "Tiep tuc (C/K): ";
        cin >> c;
        if (c == 'c' || c == 'C') {
            ketthuc = false;
        }
        if (c == 'k' || c == 'K') {
            ketthuc = true;
        }
    } while(ketthuc == false);
    system("pause");
    return 0;
}