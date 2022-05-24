#include <iostream>
using namespace std;

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
    int he2;
    do
    {
        cout << "Nhap vao so he 2: ";
        cin >> he2;
        if (he2 < 0)
            cout << "Nhap sai. Nhap lai ! ";
    } while (he2 < 0);
    cout << he2 << "(2) = " << Bin_Dec(he2) << endl;
    return 0; 
}