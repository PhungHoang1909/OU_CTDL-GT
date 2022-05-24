#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int max = 100;
    int t, n;
    cout << "Nhap so luong test: ";
    cin >> t;
    double tong[max];
    tong[1] = sqrt(2);
    for (int i = 2; i < max; i++)
    {
        tong[i] = sqrt(2 + tong[i - 1]);
    }
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << tong[n] << endl;
    }
    return 0;
}