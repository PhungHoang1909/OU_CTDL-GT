/*
List được thực hiện như danh sách nối kép (doubly-linked list). 
Mỗi phần tử trong danh sách nối kép có liên kết đến một phần tử trước đó 
và một phần tử sau nó.
*/

#include <list>

Khai báo list rỗng:
// list <KDL> tên_list;
list<int> a;

Khai báo khi biết trước size:
// list<KDL> tên_list(size);
list<int> a(5); a = [0, 0, 0, 0, 0]

Khai báo list khi biết trước size và giá trị khởi tạo:
// list<KDL> tên_list(Size, value);
list<int> a(3, 2); a = [2, 2, 2]


Duyệt list:

Để duyệt list theo chiều thuận (từ trái qua phải) ta làm như sau:

for (list<int>::iterator it = a.begin(); it != a.end(); it++);
// hoặc:
for (list<int>::const_iterator it = a.cbegin(); it != a.cend(); it++);


Để duyệt list theo chiều nghịch (từ phải qua trái) ta làm như sau:
for (list<int>::reverse_iterator it = a.rbegin(); it != a.rend(); it++);

