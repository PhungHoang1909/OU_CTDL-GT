#include <iostream>

using namespace std;

const int N = 20;

int main()
{
    int a[N][N], n, value = 1;
    do
    {
        cout << "Nhap cap cua ma tran A: ";
        cin >> n;
        if (n < 2 || n > 10)
            cout << "Nhap sai, vui long nhap lai" << endl;
    } while (n < 2 || n > 10);
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0) 
        {
            for (int i = 0; i < n; i++)
            {
                a[i][j] = value++;
            }
        }
        else 
        {
            for (int i = n - 1; i >= 0; i--)
            {
                a[i][j] = value++;
            }
        } 
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}