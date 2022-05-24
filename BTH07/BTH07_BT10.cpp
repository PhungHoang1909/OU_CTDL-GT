/*
10. Dựa trên hàm hoán đổi giá trị 2 số đã xây dựng ở bài tập 5, viết các hàm sau đây và
chương trình để kiểm tra hàm:
a. Sắp xếp 2 số nguyên giảm dần.
b. Sắp xếp 3 số nguyên tăng dần.
c. Sắp xếp 3 số nguyên giảm dần.
*/

#include <iostream>

using namespace std;

void hoandoi(int &a, int &b)
{
    int tam = a;
    a = b;
    b= tam;
}

void giamdan2so(int a, int b)
{
    if (a < b) {
        hoandoi(a, b);
    }
    cout << a << ", " << b;
}

void giamdan3so(int a, int b, int c)
{
    if (a < b) {
        hoandoi(a, b);
    }
    if (a < c) {
        hoandoi(a, c);
    }
    if (b < c) {
        hoandoi(b, c);
    }
    cout << a << ", " << b << ", " << c;
}

void tangdan3so(int a, int b, int c)
{
    if (a > b) {
        hoandoi(a, b);
    }
    if (a > c) {
        hoandoi(a, c);
    }
    if (b > c) {
        hoandoi(b, c);
    }  
    cout << a << ", " << b << ", " << c; 
}

int main()
{
    int a, b, c;
    do
    {
        cout << "Nhap vao 3 so nguyen: ";
        cin >> a >> b >> c;
        if (a < 0 || b < 0 || c < 0) {
            cout << "Nhap sai nhap lai!";
        }
    }while(a < 0 || b < 0 || c < 0);
    cout << "2 so giam dan: ";
    giamdan2so(a, b);
    cout << endl;
    cout << "3 so giam dan: ";
    giamdan3so(a, b, c);
    cout << endl;
    cout << "3 so tang dan: ";
    tangdan3so(a, b, c);
    cout << endl;
    system("pause");
    return 0;
}