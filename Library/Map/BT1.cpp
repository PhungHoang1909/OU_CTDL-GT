/*
Cho một chuỗi s, hãy đưa ra một dãy lần lượt là các ký tự và số lần xuất hiện của nó, 
các ký tự sắp xếp theo thự tự từ điển.
*/

#include<iostream>
#include<map>
#include<vector>

using namespace std;

std::vector<std::string> countChar(std::string s)
{
    map<char, int> mp;
    vector<string> v;
    for (auto x : s)
    {
        mp[x]++;
    }
    for (auto x : mp)
    {
        string ans = " ";
        ans = x.first + ans + to_string(x.second);
        v.push_back(ans);
    }
    return v;
}