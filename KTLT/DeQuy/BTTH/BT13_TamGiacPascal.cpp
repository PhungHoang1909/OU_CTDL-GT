#include <iostream>
#include <iomanip>

using namespace std;

int giaithua(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return giaithua(n-1) * n;
}

int ToHop(int n, int k)
{
    return giaithua(n) / (giaithua(k)*giaithua(n-k));
}

void Pascal(int n)
{
    if (n == 0)
        cout << " ";
    else
    {
        Pascal(n-1);
        cout << endl;
        for (int i = 0; i < n; i++)
            cout << setw(4) << ToHop(n - 1, i);
    }
}

int main()
{
    int n;
    cout << "Nhap chieu cao tam giac pascal: ";
    cin >> n;
    Pascal(n);
    return 0;
}