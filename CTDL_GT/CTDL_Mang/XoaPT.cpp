#include <iostream>

using namespace std;

int main()
{
    int a[30], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    
    //
    for (int i = k; i < n; i++)
        a[i] = a[i + 1];
    n--;
    //

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}