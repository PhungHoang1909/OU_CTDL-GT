#include<iostream>

using namespace std;

int main()
{
    double dtl;
    cout << "Nhap diem tich luy: ";
    cin >> dtl;
    if (dtl >= 0 && dtl <= 10) {
        if (dtl >= 9) {
            cout << "Sinh vien xuat sac" << endl;
        }
        if (dtl >= 8 && dtl < 9) {
            cout << "Sinh vien gioi" << endl;
        }
        if (dtl >= 7 && dtl < 8) {
            cout << "Sinh vien kha" << endl;
        }
        if (dtl >= 6 && dtl < 7) {
            cout << "Sinh vien trung binh kha" << endl;
        }
        if (dtl >= 5 && dtl < 6) {
            cout << "Sinh vien trung binh" << endl;
        }
        if (dtl < 5) {
            cout << "Sinh vien yeu" << endl;
        }
        system("pause");
        return 0;
    } else {
        cout << "Diem tich luy khong hop le" << endl;
    }
    system("pause");
    return 0;
}