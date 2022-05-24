#include<iostream>

using namespace std;

int main()
{
    string name;
    int ngaylam, luongngay;
    int tienluong;
    cout << "Nhap ten: ";
    cin >> name;
    cout << "Nhap so ngay lam: ";
    cin >> ngaylam;
    cout << "Nhap tien luong 1 ngay: ";
    cin >> luongngay;
    tienluong = ngaylam * luongngay;
    cout << "Ten: " << name << endl;
    cout << "Tien luong nhan duoc: " << tienluong << endl;
    system("pause");
    return 0;
}