// Hàm Khai báo và trả về vector gồm n phần tử giá trị 1 - n

#include <iostream>
#include <vector>

using namespace std;

vector<int> initializeVector(int n) // Hàm 
{
    vector<int> a;
    for (int i = 1; i <= n; i++) {
        a.push_back(i);
    }
    return a;
}

int main()
{
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    vector<int> b; // Khai bao vector
    b = initializeVector(n); // Goi ham

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}