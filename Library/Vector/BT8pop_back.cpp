/*
Cho trước một vector các số nguyên v, 
bạn hãy viết hàm xóa phần tử cuối cùng trong vector này và trả về vector tương ứng sau khi xóa.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> xoapt(vector<int> v)
{
    v.pop_back(); // Xoá phần tử cuối cùng
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return v;
}

int main()
{
    vector<int> v;
    int n, value;
    cout << "Nhap phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "v[" << i << "] = ";
        cin >> value;
        v.push_back(value);
    }
    xoapt(v);
    return 0;
}