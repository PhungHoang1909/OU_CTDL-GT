/*
Bạn đã được cung cấp một chuỗi s làm đầu vào và bạn phải in biểu mẫu đã sửa đổi. Chuỗi được sửa đổi theo cách sau:

Những ký tự giống nhau chỉ lấy duy nhất một ký tự.
Ký tự nào có tần số xuất hiện trong chuỗi s nhiều hơn được sắp xếp trước.
Những ký tữ có cùng tần số xuất hiện thì sắp xếp theo thứ từ từ điển từ nhỏ đến lớn.
Ví dụ:

Với s = "codelearn" thì  modifyString = "eacdlnor".

Với s = "helloworld" thì  modifyString = "lodehrw".
*/

#include<iostream>
#include<map>
#include<vector>

using namespace std;

string modifyString(string s){
    map<char, int> mp;
    for (auto x : s)
    {
        mp[x]++;
    }
    vector<pair<char, int> > vt(mp.begin(), mp.end());
    string ans = "";
    for (int i = 0; i < vt.size(); i++)
    {
        for (int j = i+1; j < vt.size(); j++)
        {
            if (vt[i].second < vt[j].second)
            {
                swap(vt[i], vt[j]);
            }
            else if (vt[i].second == vt[j].second)
            {
                if (vt[i].first > vt[j].first)
                {
                    swap(vt[i], vt[j]);
                }
            }
        }
    }
    for (auto x : vt)
    {
        ans.push_back(x.first);
    }
    return ans;
}