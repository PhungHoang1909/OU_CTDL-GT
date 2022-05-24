#include <iostream>

using namespace std;

int main()
{
    int n;
    int tong = 0;
    int Max = INT_MIN, Min = INT_MAX;
    while (cin >> n)
    {
        if (n > Max) {
            Max = n;
        }
        if (n < Min) {
            Min = n;
        }
        tong += n;
    }
    cout << "max = " << Max << endl;
    cout << "min = " << Min << endl;
    cout << "Tong = " << tong << endl;
    system("pause");
    return 0;
}