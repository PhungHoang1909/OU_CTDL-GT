/*
Bài 1. Viết chương trình thực hiện các yêu cầu sau:
a. Khai báo 2 biến x và y kiểu số nguyên.
b. Khai báo con trỏ p để trỏ đến biến kiểu số nguyên.
c. Cho con trỏ p trỏ đến x.
d. Con trỏ p nhận giá trị lưu trữ là 80.
e. Xuất địa chỉ của biến x.
f. Xuất địa chỉ lưu trong con trỏ p.
g. Xuất giá trị của biến mà p trỏ đến.
h. Xuất giá trị của biến x. Giá trị này có phải là giá trị mà p lưu trữ?
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int* p;
    p = &x;
    *p = 80;
    cout << "Dia chi cua bien x: " << &x << endl;
    cout << "Dia chi luu trong con tro p: " << p << endl;
    cout << "Gia tri bien ma p tro den: " << *p << endl;
    cout << "Gia tri cua x: " << x << endl;
    system("pause");
    return 0;
}