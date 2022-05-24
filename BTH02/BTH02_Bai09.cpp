#include<iostream>

using namespace std;

int main()
{
    int tongsach, tongtien;
    cout << "Nhap vao tong so sach: ";
    cin >> tongsach;
    cout << "Nhap vao tong so tien: ";
    cin >> tongtien;
    int tienvc = 2000 * tongsach;
    double thue = 0.075 * tongtien;
    double trigia = tongtien + thue + tienvc;
    cout << "Tong tri gia don hang la: " << trigia << endl;
    system("pause");
    return 0;
}