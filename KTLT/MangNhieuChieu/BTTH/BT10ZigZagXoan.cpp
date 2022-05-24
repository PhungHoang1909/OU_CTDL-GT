#include <iostream>

using namespace std;

const int N = 20;

int main()
{
    int a[N][N], n, value = 1;
    int minm, minn, maxm, maxn;
    do
    {
        cout << "Nhap cap cua ma tran A: ";
        cin >> n;
        if (n < 2 || n > 10)
            cout << "Nhap sai, vui long nhap lai" << endl;
    } while (n < 2 || n > 10);
    minm = minn = 0;
    maxm = maxn = n - 1;
    while (value <= n * n)
    {
        // Huong 1: Hang 1 tu trai qua phai
        for (int i = minn; i <= maxn; i++ )
        {
            a[minm][i] = value++;
        }
        minm++;

        // Huong 2: Cot 4 tu tren xuong
        for (int i = minm; i <= maxm; i++)
        {
            a[i][maxn] = value++;
        }
        maxn--;

        // Huong 3: Hang 4 tu phai qua trai
        for (int i = maxn; i >= minn; i--)
        {
            a[maxm][i] = value++;
        }
        maxm--;

        // huong 4: (cot 1) tu duoi len tren
        for (int i = maxm; i >= minm; i--) {
            a[i][minn] = value++;
        }
        minn++;
    }
    
    cout << "Mang xoan oc 4 chieu: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
