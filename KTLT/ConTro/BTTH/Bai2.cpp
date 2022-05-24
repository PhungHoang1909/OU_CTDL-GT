/*
Bài 2. Viết chương trình thực hiện các yêu cầu sau:
a. Khai báo 1 mảng số nguyên tối đa 30 phần tử.
b. Khởi tạo 1 mảng số nguyên với giá trị ngẫu nhiên (các giá trị nhỏ hơn 10).
c. Khai báo biến con trỏ p trỏ đến mảng vừa khởi tạo.
d. Dùng con trỏ và ký pháp độ dời để xuất các giá trị đang lưu trữ trong mảng.
e. Dùng con trỏ và ký pháp chỉ số để xuất các giá trị đang lưu trữ trong mảng.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a[30];
    for (int i = 0; i < 10; i++)
        a[i] = rand() % 10;
    int* p = a;
    for (int i = 0; i < 10; i++)
        cout << *(a + i) << " ";
    cout << endl;
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    delete p;
    p = nullptr;
    system("pause");
    return 0;
}