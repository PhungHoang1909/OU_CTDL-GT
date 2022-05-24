/*
Viết chương trình thực hiện các công việc sau đây:
a) Định nghĩa hằng MAXSIZE là 100.
b) Khai báo mảng values có thể lưu số phần tử tối đa là MAXSIZE, kiểu của mỗi
phần tử là double.
c) Khai báo currentSize lưu số phần tử hiện có trong mảng.
d) Nhập vào giá trị của currentSize.
e) Nhập vào các giá trị trong mảng values, số phần tử đọc vào là currentSize.
f) In các phần tử trong mảng values trên một dòng, cách nhau bởi dấu phẩy.
*/

#include <iostream>

using namespace std;

int main()
{
    const int MAXSIZE = 100; // cau a
    double a[MAXSIZE]; // cau b
    int currentSize; // cau c
    // cau d
    cout << "Nhap vao gia tri currentSize: ";
    cin >> currentSize;
    // cau e
    for (int i = 0; i < currentSize; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    // cau f
    cout << "In ra cac phan tu trong mang: " << endl;
    for (int i = 0; i < currentSize; i++)
    {
        cout << a[i];
        if (i < currentSize - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    system("pause");
    return 0;
}