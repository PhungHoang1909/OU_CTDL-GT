// Chuyen He Co so

#include <iostream>

using namespace std;

int Dec_Bin(int n)
{
    int a;
    if (n == 0)
        return 0;
    else
    {
        a = n % 2;
        return Dec_Bin(n / 2) * 10 + a;
    }
}

int Bin_Dec(int n)
{
    int a;
    if (n == 0)
        return 0;
    else 
    {
        a = n % 10;
        return Bin_Dec(n / 10) * 2 + a;
    }
}

int main()
{
    int he2, he10;
    cout << "Nhap he so 2: ";
    cin >> he2;
    cout << he2 << "(2) = " << Bin_Dec(he2) << " (10). " << endl;
    cout << "Nhap he so 10: ";
    cin >> he10;
    cout << he10 << "(10) = " << Dec_Bin(he10) << " (2). " << endl;
    return 0;
}