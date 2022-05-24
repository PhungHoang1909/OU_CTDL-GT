/*
Cho một vector chứa các xâu kí tự, 
bạn hãy viết hàm tìm những xâu có độ dài lớn nhất trong vector ban đầu và trả về kết quả tương ứng.
*/

#include <iostream>
#include <vector>

using namespace std;

void ChuoiMax(vector<string> a)
{
    int max = 0;
    vector<string> result;

    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() > max) {
            max = a[i].size();
        }
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() == max) {
            result.push_back(a[i]);
            cout << a[i] << " ";
        }
    }
}

int main()
{
    vector<string> a;
    int n;
    string value;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> value;
        a.push_back(value);
    }
    ChuoiMax(a);
    return 0;
}