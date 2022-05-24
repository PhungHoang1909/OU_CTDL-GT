#include <iostream>
// KDL vector nam trong thu vien vector
#include <vector>

using namespace std;

int main()
{
    // Khởi tạo vector các số nguyên a
    vector<int> a;

    // Thêm phần tử vào vector: push_back
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    // Lấy ra số phần tử trong vector: size()
    cout << "Size of vector a: " << a.size() << endl;

    // Có thể dùng vòng lặp để duyệt vector giống mảng
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    return 0;
}