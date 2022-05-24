/*
Để thêm một phần tử vào đầu list, ta có thể dùng hàm push_front() (Độ phức tạp O(1)).
Để thêm một phần tử vào cuối list, ta có thể dùng hàm push_back() (Độ phức tạp O(1)).
*/

// Cho số tự nhiên n, hãy khởi tạo một list gồm các phần tử lần lượt từ 1 đến n.

#include <iostream>
#include <list>
#include <vector>

using namespace std;

list<int> initList(int n)
{
    list<int> res;
    for (int i = n; i >= n; i--) {
        res.push_front(i);
    }
    return res;
}

vector<int> verifyFunction(int n)
{
    list<int> l = initList(n);
    vector<int> vec(l.begin(), l.end());
    return vec;
}