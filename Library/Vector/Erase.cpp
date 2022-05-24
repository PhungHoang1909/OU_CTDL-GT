// erase(first, last)

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    for (int i = 1; i <= 10; i++) {
        v.push_back(i);
    }

    // Xoá 2 phần tử đầu
    v.erase(v.begin(), v.begin() + 2); // 3 4 5 6 7 8 9 10

    // Xoá 2 phần tử cuối
    v.erase(v.end() - 2, v.end()); // 3 4 5 6 7 8

    // Xoá các phần tử có chỉ số từ 2 tới 4
    // Lưu ý là v.begin() + 5 chứ không phải v.begin() + 4
    v.erase(v.begin() + 2, v.begin() + 5); // 3 4 8

    /*
    for (auto x : v) {
        cout << x << " ";
    }
    */
    
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}