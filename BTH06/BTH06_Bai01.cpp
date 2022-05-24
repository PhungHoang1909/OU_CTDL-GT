/* 
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm tính diện tích hình chữ nhật.
b. Hàm tính chu vi hình chữ nhật
*/

#include <iostream>

using namespace std;

int dientichhcn(int a, int b)
{
    int dientich = a * b;
    return dientich;
}

int chuvihcn(int a, int b)
{
    int chuvi = (a + b) * 2;
    return chuvi;
}

int main()
{
    int dai, rong;
    cout << "Nhap chieu dai va chieu rong: ";
    cin >> dai >> rong;
    cout << "Dien tich hcn la: " << dientichhcn(dai, rong) << endl;
    cout << "Chu vi hcn la: " << chuvihcn(dai, rong) << endl;
    system("pause");
    return 0;
}