// Thay đổi kích thước vector v về n: v.resize(n)

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    // Vecto có giá trị: 1...10
    for (int i = 1; i <= 10; i++) {
        v.push_back(i);
    }
    v.resize(5); // Vector: 1...5
    v.resize(10,10); // Vector: 1...5 10 10 10 10 10
    v.resize(15); // Vector: 1... 5 10 10 10 10 10 0 0 0 0 0
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