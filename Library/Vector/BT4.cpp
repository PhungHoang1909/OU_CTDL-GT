// Cho trước một vector và một số tự nhiên n, hãy thay đổi kích thước của vector đó về n.

#include <iostream>
#include <vector>

using namespace std;

// Hàm
vector<int> DoiKT(vector<int> v, int n)
{
    v.resize(n);
    for (int i = 0; i <v.size(); i++)
    {
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
    // Nhập giá trị vector
    for (int i = 0; i < n; i++)
    {
        cout << "v[" << i << "] = ";
        cin >> value;
        v.push_back(value);  
    }
    
    // Thay đổi kích thước:
    int nresize;
    cout << "Nhap kich thuoc: ";
    cin >> nresize;
    DoiKT(v, nresize);
    return 0;
}