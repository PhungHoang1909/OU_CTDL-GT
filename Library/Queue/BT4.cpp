/*
Huyền có một cái điện thoại, màn hình điện thoại của Huyền chỉ hiển thị được tối đa k tin nhắn. Màn hình của Huyền hiện thị như sau:

Không hiện thị 2 tin nhắn của cùng một số điện thoại (SĐT) trên cùng một khung hình, nếu SĐT a gửi tin nhắn đến mà trên màn hình đã có tin nhắn của SĐT a thì màn hình không thay đổi gì.
Khi SĐT a gửi tin nhắn đến mà trên màn hình chưa có tin nhắn của SĐT a thì:
Nếu màn hình chưa đủ k tin nhắn thì tin nhắn của SĐT a sẽ được chèn vào cuối màn hình. 
Nếu màn hình đã có đủ k tin nhắn thì thì màn hình sẽ đẩy tin nhắn trên cùng ra và sau đó chèn tin nhắn của SĐT a vào cuối màn hình.

Cho dãy a là các SĐT sẽ gửi tin nhắn cho Huyền. Hỏi sau khi nhận được tin nhắn cuối cùng thì màn hình của Huyền đang hiển thì tin nhắn của các SĐT nào, đưa ra theo thứ tự từ trên xuống dưới của màn hình.
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;


std::vector<int> messagePhone(std::vector<int> a, int k)
{
    queue<int> q;
    vector<bool> b(1001, false);
    for(int i = 0; i < a.size(); i++) {
        if(!b[a[i]]) {
            if(q.size() < k) {
                b[a[i]] = true;
                q.push(a[i]);
            } else {
                b[q.front()] = false;
                b[a[i]] = true;
                q.push(a[i]);
                q.pop();
            }
        }
    }
    std::vector<int> d;
    while(!q.empty()) {
        d.push_back(q.front());
        q.pop();
    }
    return d;
}