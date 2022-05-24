/*
Một vector được gọi là vector beautifull nếu một số trong vector đó chỉ xuất hiện đúng một lần.

Cho vector v gồm các số nguyên. 
Cần xóa ít nhất bao nhiều phần tử trong v để vector v trở thành vector beautifull .
*/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int vectorBeautifull(std::vector<int> v)
{
    set<int> s(v.begin(), v.end());
    return v.size() - s.size();
}