#include <iostream>

using namespace std;

int dem(int n)
{
    if (n < 10)
        return 1;
    else 
        return 1 + dem(n / 10);
}

int main()
{
    int n;
    do
    {
        cout << "Nhap vao so nguyen n: ";
        cin >> n;
        if (n < 0)
            cout << "Nhap sai. Nhap lai !\n";
    } while (n < 0);
    cout << n << " co " << dem(n) << " chu so" << endl;
    return 0; 
}