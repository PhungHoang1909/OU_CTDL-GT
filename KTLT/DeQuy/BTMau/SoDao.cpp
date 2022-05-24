#include <iostream>

using namespace std;

int dao(int n, int so)
{
    if (n == 0)
        return so;
    else 
    {
        so = so * 10 + n % 10;
        return dao(n/10, so);
    }
}

int main()
{
    int n, sodao = 0;
    do
    {
        cout << "Nhap vao so nguyen n: ";
        cin >> n;
        if (n < 0)
            cout << "Nhap sai. Nhap lai !\n";
    } while (n < 0);
    cout << "So dao nguoc cua " << n << " la: " << dao(n, sodao) << endl; 
    return 0; 
}