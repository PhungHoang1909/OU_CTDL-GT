/*
Anh Việt đang thông kê số liệu cho công ty, anh muốn giá trị nhỏ thứ hai ở trong một dãy số nguyên.

Hãy giúp anh Việt tìm ra giá trị đó, nếu không có kết quả như yêu cầu thì trả về "NO".
*/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

std::string secondOrder(std::vector<int> arr)
{
    std::set<int> s(arr.begin(), arr.end());
    std::set<int>::iterator it = s.begin();
    std::advance(it, 1);
    if(s.size() > 1)
        return std::to_string(*it);
    else
        return "NO";
}