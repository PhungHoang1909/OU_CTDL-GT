/*
Queue(hàng đợi) là một loại container, 
được thiết kế để hoạt động theo kiểu FIFO (First- in first – out) (vào trước ra trước), 
tức là một kiểu danh sách mà việc bổ sung được thực hiển ở cuối danh sách 
và loại bỏ ở đầu danh sách.

Trong queue, có hai vị trí quan trọng là vị trí đầu danh sách (front), 
nơi phần tử được lấy ra, và vị trí cuối danh sách (back), nơi phần tử cuối cùng được thêm vào.

#include <queue>
size()	Trả về số lượng phần tử của queue
empty()	Trả về true(1) nếu queue rỗng, ngược lại là false (0)
Element access:	
front()	Truy xuất phần tử ở đầu queue (phần tử đầu tiên được thêm vào)
back()	Truy xuất phần tử ở cuối queue (phần tử cuối cùng được thêm vào)
Modifier:
push (const x)	Thêm phần tử có giá trị x vào cuối queue. Kích thước queue tăng thêm 1.
pop ()	Loại bỏ phần tử ở đầu queue. Kích thước queue giảm đi 1.
*/

// Bai tap:
/*
Nhập vào một số nguyên dương n, tiếp theo nhập n số nguyên lần lượt là các phần tử của queue. 
Cuối cùng nhập vào một số tự nhiên k.

Một phép biến đổi sẽ dịch chuyển phần tử đầu tiên ra sau phần tử cuối cùng của dãy, 
hãy trả về dãy sau khi đã biến đổi k lần. In tất cả các phần tử ra màn hình, 
sau mỗi phần tử có đúng một khoảng trắng.
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    int n, k, temp;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap temp " << i << ": ";
        cin >> temp;
        q.push(temp); 
    }
    cout << "Nhap k: ";
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int x = q.front();
        q.pop();
        q.push(x);
    }
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
