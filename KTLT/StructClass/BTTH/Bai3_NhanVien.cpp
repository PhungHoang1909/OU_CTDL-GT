/*
Bài 3. Định nghĩa kiểu dữ liệu NhanVien gồm các thông tin sau:
- Mã nhân viên kiểu string
- Họ tên kiểu string
- Năm vào làm kiểu int
- Năm sinh kiểu int
Viết các hàm:
- Nhập vào đầy đủ thông tin của 1 nhân viên.
- Xuất lại thông tin của nhân viên vừa nhập.
- Tính tuổi và thâm niên làm việc của nhân viên này. Biết rằng:
tuổi = năm hiện tại – năm sinh
thâm niên = năm hiện tại – năm vào làm
- Hàm main kiểm chứng chương trình.
*/

#include <iostream>
#include <string>

using namespace std;

struct NhanVien
{
	string maNV;
	string hotenNV;
	int namlam;
	int namsinh;
};

void Nhap(NhanVien &nv)
{
	cout << "Nhap thong tin nhan vien: " << endl;
	cout << "Nhap Ma Nhan Vien: ";
	getline(cin, nv.maNV);
	cout << "Nhap Ho ten Nhan vien: ";
	getline(cin, nv.maNV);
	cout << "Nhap nam vao lam cua Nhan Vien: ";
	cin >> nv.namlam;
	cin.ignore();
	cout << "Nhap nam sinh Nhan Vien: ";
	cin >> nv.namsinh;
}

void Xuat(NhanVien nv)
{
	cout << "Xuat thong tin nhan vien: " << endl;
	cout << "Ma Nhan Vien: " << nv.maNV << endl;
	cout << "Ho ten Nhan Vien: " << nv.hotenNV << endl;
	cout << "Nam lam Nhan Vien: " << nv.namlam << endl;
	cout << "Nam sinh Nhan Vien: " << nv.namsinh << endl;
}

int Tuoi(NhanVien nv)
{
	int tuoi = 2022 - nv.namsinh;
	return tuoi;
}

int thamnien(NhanVien nv)
{
	int thamnien = 2022 - nv.namlam;
	return thamnien;
}

int main()
{
	NhanVien nv;
	Nhap(nv);
	cout << endl;
	Xuat(nv);
	cout << "Nhan vien " << Tuoi(nv) << " tuoi " << endl;
	cout << "Nhan vien co " << thamnien(nv) << " tham nien " << endl;
	system("pause");
	return 0;
}