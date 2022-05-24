/*
Cho một số nguyên dương n.

Hãy chuyển n thành mã nhị phân. */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

std::string stackBin(int n)
{
    string s;
    stack<char> st;
    while(n > 0) {
        st.push(n % 2 + '0');
        n /= 2;
    }
    while(!st.empty()) {
        s = s + st.top();
        st.pop();
    }
    return s;
}

int main()
{
    int n;
    cout << "Nhap so: ";
    cin >> n;
    cout << "So nhi phan: ";
    cout << stackBin(n);
    return 0;
}

/*
Để chuyển một số nguyên dương n về hệ nhị phân ta làm như sau:

Trong khi n > 0 thì ta lấy n chia cho 2 và lưu số dư đó lại. Cứ làm vậy đến khi nào n = 0 thì dừng lại.

Kết quả cần tìm chính là danh sách các số dư được đọc ngược lại, ta sẽ nghĩ ngay đến việc sùng stack để lưu các số dư này, sau đó chỉ cần in ra stack là được.

Ví dụ n = 13: thì quy trình biến đổi như sau: 

Khởi tạo st = []
Với n = 13, lấy 13 chia 2 được 6 dư 1, lưu 1 và st, st = [1].
với n = 6, lấy 6 chia 2 được 3 dư 0, lưu 0 và st, st = [1,0].
với n = 3, lấy 3 chia 2 được 1 dư 1, lưu 0 và st, st = [1,0,1].
Với n = 1, lấy 1 chia 2 được 0 dư 1, lưu 1 và st, st = [1,0,1,1].
Với n =0, ta dừng lại và in ra stack st.
*/