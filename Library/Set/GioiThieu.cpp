/*
Các hàm cơ bản:

size() : trả về kích thước hiện tại của set. (Độ phức tạp O(1)).
empty() : trả về true nếu set rỗng, và ngược lại trả về false. (Độ phức tạp O(1)).

Khi khai báo như trên thì khi ta thêm các giá trị vào set thì các phần tử trong set sẽ có giá trị tăng dần.

Để thêm một giá trị và set s ta sử dụng hàm insert(). (Độ phức tạp O(logN). Khi thêm vào một phần tử thì size() của set sẽ tự tăng thêm một.

Lưu ý: trong một set sẽ không có hai phần tử cùng giá trị, nên khi bạn gọi hàm insert(x) mà trong set đó đã tồn tại giá trị x rồi thì set đó sẽ không thêm phần tử đó vào nữa.
*/

/*
Ta cũng có thể thay đổi các sắp xếp trong set bằng cách viết lại hàm , 
ví dụ muốn set theo giá trị giảm dần ta làm như sau:
*/

#include <iostream>
#include <set>

using namespace std;

struct cmp{
    bool operator() (int a, int b) {
        return a > b;
    }
};

int main() {
    set <int,cmp> s;
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(9);
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    return 0;
}