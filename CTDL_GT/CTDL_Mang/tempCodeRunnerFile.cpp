#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[30];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        if (a[i] > a[i - 1] || a[i] > a[i - 1])
            cout << "YES";
        else
            cout << "NO";
    return 0;
}