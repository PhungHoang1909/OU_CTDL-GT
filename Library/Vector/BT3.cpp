// Hàm tính tổng lẻ trong vector

#include <iostream>
#include <vector>

using namespace std;

int sumOfOdd(vector<int> v)
{
    int sum = 0;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        if (*it % 2 != 0) {
            sum += *it;
        }
    }
    return sum;
}

// Cách 2:
int sumOfOddElements(vector<int> u)
{
    int sum = 0;
    for (auto x : u) {
        if (x % 2 != 0) {
            sum += x;
        }
    }
    return sum;
}

int main()
{
    int n, gt;
    vector<int> a;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> gt;
        a.push_back(gt);
    }
    // cout << "Tong = " << sumOfOdd(a);
    cout << endl;
    cout << "Tong = " << sumOfOddElements(a);
    return 0;
}