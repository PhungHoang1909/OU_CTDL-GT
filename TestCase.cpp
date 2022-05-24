#include<iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[20][20];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int tong = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tong += a[i][j];
        }
    }
    cout << tong;
}