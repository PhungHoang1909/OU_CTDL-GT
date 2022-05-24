/*
5. Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm hoán đổi giá trị 2 số nguyên.
b. Hàm sắp xếp 2 số nguyên tăng dần (sử dụng lại hàm hoán đổi ở câu a)
*/

#include <iostream>

using namespace std;

void hoandoi(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void sapxeptang(int a, int b)
{
    if (a > b) {
        hoandoi(a, b);
    }
    cout << "Sap xep 2 so nguyen tang: " << a << ", " << b << endl;
}

int main()
{
    int a, b;
    do 
    {
        cout << "Nhap so nguyen a: ";
        cin >> a;
        cout << "Nhap so nguyen b: ";
        cin >> b;
        if (a < 0 || b < 0) {
            cout << "Nhap sai, nhap lai!";
        }
    } while (a < 0 || b < 0);
    cout << endl;
    cout << "Gia tri sau khi hoan doi: " << endl;
    hoandoi(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    sapxeptang(a, b);
    system("pause");
    return 0;
}