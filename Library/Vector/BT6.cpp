/*
Cho một vector chứa các số nguyên, hãy tìm giá trị lớn nhất của tích của 2 số nguyên liên tiếp trong vector 
(đầu vào luôn đảm bảo vector có ít nhất 2 phần tử).
*/

#include <iostream>
#include <vector>

using namespace std;

int maxTich(vector<int> v)
{
    int max = v[0] * v[1];
    for (int i = 1; i < v.size() - 1; i++) {
        if (v[i] * v[i + 1] > max) {
            max = v[i] * v[i + 1];
        }
    }
    return max;
}

/*
int MaxTich(vector <int> v)
{
    int max = 0, j = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            j=i;
        }
    }
    return max*v[j-1];
}
*/

int main()
{
    vector<int> v;
    int n, value;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "v[" << i << "] = ";
        cin >> value;
        v.push_back(value);
    }
    cout << "Tich max: " << maxTich(v);
    return 0;
}