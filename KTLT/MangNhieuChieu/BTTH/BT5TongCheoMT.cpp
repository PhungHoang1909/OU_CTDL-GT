#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int max = 10;
    int a[max][max], n;
    cout << "Nhap vao cap cua ma tran: ";
    cin >> n;
    cout << "Xuat mang: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int tongc = 0, tongp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                tongc += a[i][j];
            else if (j == n - i - 1)
                tongp += a[i][j];
        }
    }
    cout << "Tong cheo chinh cua MT = " << tongc << endl;   
    cout << "Tong cheo phu cua MT = " << tongp << endl;  
    return 0; 
}