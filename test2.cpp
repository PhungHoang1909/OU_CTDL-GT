#include <iostream>
#include <cmath>

using namespace std;

void menu()
{
    cout << "1. In ra cac so nguyen to khong vuot qua n." << endl;
    cout << "2. Tinh tong tat ca so nguyen to khong vuot qua n." << endl;
    cout << "3. In ra cac he so 2 tu 1 den n" << endl;
    cout << "4. Thoat." << endl;
}

bool KTNT(int n)
{
    if (n < 2) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int Tong_NT(int n)
{
    int tongNT = 0;
    for (int i = 2; i <= n; i++)
    {
        if (KTNT(i)) {
            tongNT += i;
        }
    }
    return tongNT;
}

int He10_2(int n)
{
    int bin = 0, i = 0, r;
    while(n > 0)
    {
        r = ( n % 2 );
        bin = bin + r*(pow(10.0, i));
        n /= 2;
        i++;
    }
    return bin;
}

int main()
{
    int chon, n;
    do
    {
        menu();
        do
        {
            cout << "Nhap vao so nguyen n: ";
            cin >> n;
            if (n <= 0) {
                cout << "Nhap sai!";
            }
        } while (n <= 0);
        do
        {
            cout << "Chon chuc nang: ";
            cin >> chon;
            if(chon < 1 || chon > 4) {
                cout << "Chuc nang khong hop le!" << endl;
            }
        }while(chon < 1 || chon > 4);
        if (chon >= 1 && chon <= 3)
        {
            switch(chon)
            {
                case 1:
                {
                    cout << "Cac so nguyen to khong vuot qua " << n << " : " << endl;
                    for (int i = 2; i <= n; i++)
                    {
                        if (KTNT(i) == true) {
                            cout << i << " ";
                        }
                    }
                    cout << endl;
                    break;
                }
                case 2:
                {
                    cout << "Tong cac so nguyen to khong vuot qua " << n << " : " << endl;
                    cout << Tong_NT(n);
                    cout << endl;
                    break;
                }
                case 3:
                {
                    cout << "He so 2 tu 1 den " << n << " la: ";
                    for (int i = 1; i <= n; i++)
                    {
                        cout << He10_2(i) << " ";
                    }
                    cout << endl;
                }
                system("pause");
            }
        } else {
            break;
        }
    } while(true);
    return 0;
}