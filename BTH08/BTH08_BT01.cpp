/*
1. Viết chương trình thực hiện các công việc sau đây:
a) Khai báo một mảng alpha lưu 50 phần tử kiểu double.
b) Gán giá trị của 25 phần tử đầu tiên là bình phương của chỉ số phần tử, 25 phần
tử còn lại có giá trị là lập phương của chỉ số.
c) In các giá trị trong mảng alpha ra màn hình, mỗi dòng gồm 10 phần tử.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a[50]; // cau a
    for (int i = 0; i < 25; i++)  // cau b
    {
        a[i] = pow((double)i, 2);
        // a[i] = i * i;
    }
    for (int i = 25; i <= 50; i++)
    {
        a[i] = pow((double)i, 3);
        // a[i] = i * i * i;
    }
    cout << "Cac gia tri trong mang alpha: " << endl;
    for (int i = 0; i < 50; i++) {
        if (i % 10 == 0) {
            cout << endl;
        }
        cout << setw(9) << a[i];
    }
    cout << endl;
    system("pause");
    return 0;
}