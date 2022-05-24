// Viết hàm tính tổng phần tử vector 

#include <iostream>
#include <vector>

using namespace std;

int sumOfVector(vector<int> v)
{
    int res = 0;
    for (int i = 0; i < v.size(); i++)
    {
        res += v[i];
        // hoặc res += v.at(i);
    }
    return res;
}

int main()
{
    vector <int> a;
    int n, gt;
    cout << "Nhap so phan tu: ";
    cin >> n;

    // Nhap gia tri cac phan tu:

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> gt;
        a.push_back(gt);
    }

    cout << "Tong = " << sumOfVector(a);
    return 0;
}