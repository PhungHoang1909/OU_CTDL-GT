/*
Stack là một loại container adaptor, được thiết kế để hoạt động theo kiểu LIFO (Last - in first - out) 
(vào sau ra trước), 
tức là một kiểu danh sách mà việc bổ sung và loại bỏ một phần tử được thực hiển ở cuối danh sách. 
Vị trí cuối cùng của stack gọi là đỉnh (top) của ngăn xếp.

Khai báo:

#include<stack>
Stack có các hàm sau:

size : trả về kích thước hiện tại của stack. ĐPT O(1).
empty : true stack nếu rỗng, và ngược lại. ĐPT O(1).
push : đẩy phần tử vào stack. ĐPT O(1).
pop : loại bỏ phẩn tử ở đỉnh của stack. ĐPT O(1).
top : truy cập tới phần tử ở đỉnh stack. ĐPT O(1).
*/