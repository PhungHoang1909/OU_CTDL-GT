/* 
Cho vector gồm các số nguyên v. 
Bạn hãy viết hàm trả về tổng của phần tử đầu tiên và cuối cùng trong vector đó.
*/

/*
Để lấy ra phần tử đầu tiên trong vector v bạn có thể dùng v[0] hoặc dùng hàm v.front().
Để lấy ra phần tử cuối cùng trong vector v bạn có thể dùng v[v.size() - 1] hoặc dùng hàm v.back().
*/

#include <iostream>
#include <vector>

using namespace std;

int sumfe(vector<int> v)
{
    // return v[0] + v[v.size() - 1];
    return v.front() + v.back();
}

int main()
{
    vector<int> v;
    int n, value;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> value;
        v.push_back(value);
    }
    cout << "Tong dau va cuoi: " << sumfe(v);
    return 0;
}