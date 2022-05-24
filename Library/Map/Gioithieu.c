/*

Khai báo.

#include<map>
...
map <kiểu_dữ_liệu_1,kiểu_dữ_liệu_2>
// kiểu dữ liệu 1 là khóa, kiểu dữ liệu 2 là giá trị của khóa. 

Khóa sắp xếp tăng dần:

struct cmp{
 bool operator() (char a,char b) {return a<b;}
};
.....
map <char,int,cmp> m; 

Truy cập đến giá trị của các phần tử trong map khi sử dụng iterator:
Ví dụ ta đang có một iterator là it khai báo cho map thì:

(*it).first; // Lấy giá trị của khóa, kiểu_dữ_liệu_1
(*it).second; // Lấy giá trị của giá trị của khóa, kiểu_dữ_liệu_2
(*it) // Lấy giá trị của phần tử mà iterator đang trỏ đến, kiểu pair

it->first; // giống như (*it).first
it->second; // giống như (*it).second 
Capacity:

size: trả về kích thước hiện tại của map. Độ phức tạp O(1).
empty: true nếu map rỗng, false nếu ngược lại. Độ phức tạp O(1).
Truy cập tới phần tử:

operator [khóa]: Nếu khóa đã có trong map, thì hàm này sẽ trả về giá trị mà khóa ánh xạ đến. Ngược lại, nếu khóa chưa có trong map, thì khi gọi [] nó sẽ thêm vào map khóa đó. Độ phức tạp O(logN).

Chỉnh sửa:

insert: Chèn phần tử vào map. Chú ý: phần tử chèn vào phải ở kiểu “pair”. Đô phức tạp O(logN).
erase:
Xóa theo iterator Độ phức tạp O(logN).
Xóa theo khóa: xóa khóa trong map. ĐPT: O(logN).
clear: Xóa tất cả set. Độ phức tạp O(n).
swap: Đổi 2 set cho nhau. Độ phức tạp O(n).
Operations:

find: trả về itarator trỏ đến phần tử cần tìm kiếm. Nếu không tìm
thấy iterator trỏ về “end” của map. Độ phức tạp O(logN).
lower_bound : trả về iterator đến vị trí phần tử bé nhất mà không bé hơn (lớn hơn hoặc bằng) khóa (dĩ nhiên là theo phép so sánh), nếu không tìm thấy trả về vị trí “end” của map. Độ phức tạp là O(logN).
upper_bound: trả về iterator đến vị trí phần tử bé nhất mà lớn hơn khóa, nếu không tìm thấy trả về vị trí “end” của map. Độ phức tạp là O(logN).
*/