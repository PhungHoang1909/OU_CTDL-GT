// Cho một vector các số nguyên v, hãy sắp xếp các số nguyên trong vector này theo thứ tự tăng dần.

#include <iostream>
#include <vector>

using namespace std;

void hoandoi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

vector<int> SXTD(vector<int> v)
{
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] > v[j]) {
                hoandoi(v[i], v[j]);
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return v;
}

int main()
{
    vector<int> v;
    int n, gt;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "v[" << i << "] = ";
        cin >> gt;
        v.push_back(gt);
    }
    SXTD(v);
    return 0;
}