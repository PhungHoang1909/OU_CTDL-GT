#include <iostream>
using namespace std;

int Fibonacchi(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return Fibonacchi(n - 1) + Fibonacchi(n - 2);
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
    cout << "Day so Fibonacci thu " << n << " = " << Fibonacchi(n) << endl;
    return 0;
}