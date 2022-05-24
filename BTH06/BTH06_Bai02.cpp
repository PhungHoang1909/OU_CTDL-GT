/*
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm tìm số lớn nhất giữa 2 số nguyên.
b. Hàm tìm số lớn nhất giữa 3 số nguyên
*/

#include <iostream>

using namespace std;

int max2so(int a, int b)
{
    int max;
    if (a >= b) {
        max = a;
    } else {
        max = b;
    }
    return max;
}

int max3so(int a, int b, int c)
{
    int max = max2so(a, b);
    max = max2so(max, c);
    return max;
}

int main()
{
    int a, b, c;
    cout << "Nhap vao 3 so nguyen: ";
    cin >> a >> b >> c;
    cout << "So lon nhat giua 2 so a va b: " << max2so(a, b) << endl;
    cout << "So lon nhat giua 3 so: " << max3so(a, b, c) << endl;
    system("pause");
    return 0;
}