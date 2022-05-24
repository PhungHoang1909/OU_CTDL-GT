/*
1. Viết chương trình định nghĩa struct NhanVien gồm các thông tin:
• Mã nhân viên kiểu string
• Họ tên nhân viên kiểu string
• Năm sinh kiểu int
• Chức vụ kiểu string
• Bậc lương kiểu double
Sau đó khai báo để có thể nhập và xuất thông tin của 1 nhân viên cụ thể.
*/

#include <iostream>
#include <string>

using namespace std;

struct NhanVien
{
    string MaNV;
    string HotenNV;
    int NamsinhNV;
    string ChucvuNV;
    double LuongNV;
};

int main()
{
    NhanVien nv;
    cout << "Nhap thong tin nhan vien:\n";
    cout << "Nhap ma nhan vien: ";
    getline(cin, nv.MaNV);
    cout << "Nhap ho ten nhan vien: ";
    getline(cin, nv.HotenNV);
    cout << "Nhap nam sinh nhan vien: ";
    cin >> nv.NamsinhNV;
    cin.ignore();
    cout << "Nhap chuc vu nhan vien: ";
    getline(cin, nv.ChucvuNV);
    cout << "Nhap luong nhan vien: ";
    cin >> nv.LuongNV;

    cout << endl;
    cout << "Xuat thong tin nhan vien:\n";
    cout << "Ma nhan vien: " << nv.MaNV << endl;
    cout << "Ho ten nhan vien: " << nv.HotenNV << endl;
    cout << "Nam sinh nhan vien: " << nv.NamsinhNV << endl;
    cout << "Chuc vu nhan vien: " << nv.ChucvuNV << endl;
    cout << "Luong nhan vien: " << nv.LuongNV << endl;
    system("pause");
    return 0;
}