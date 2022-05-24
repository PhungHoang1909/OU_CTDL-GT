/* 
Iterator trong C++ là đối tượng được dùng để duyệt qua các phần tử trong các cấu trúc dữ liệu
 như vector, map, set, list, ... 
 bạn cũng có thể hiểu nó giống như 1 con trỏ mà trỏ tới các phần tử trong các cấu trúc dữ liệu này. 
Ví dụ về sử dụng iterator để duyệt qua các phẩn tử trong vector: */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Khai bao iterator
    vector<int>::iterator it;

    // Sử dụng iterator để duyệt vector
    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    /*
    it = v.begin(): Cho biến it trỏ tới phần tử đầu
    it != v.end(): phần tử đứng sau pt cuối
    *it : lấy ra phần tử mà biến it đang trỏ tới / có thể dùng để gán gt: *it = 0 */

    return 0;
}