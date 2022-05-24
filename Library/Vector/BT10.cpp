/* Cho trước vector v và hai số nguyên l, r. 
Bạn hãy viết hàm xóa đi các phần tử có chỉ số từ l tới r trong vector v và trả về vector kết quả tương ứng. */

#include <iostream>
#include <vector>

using namespace std;

vector<int> xoavt(vector<int> v, int l, int r)
{
    v.erase(v.begin() + l, v.begin() + r + 1);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return v;
}

int main()
{
    vector<int> v;
    int n, value, l, r;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> value;
        v.push_back(value);
    }
    cout << "Nhap khoang can xoa: ";
    cin >> l >> r;
    xoavt(v, l, r);
    return 0;
}