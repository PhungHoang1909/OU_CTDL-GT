#include <iostream>
#include <string>

using namespace std;

struct NhanVien
{
	string maNV;
	string hoten;
	int namsinh;
	string chucvu;
	double luong;
};

void NHAP(NhanVien &nv)
{
	cout << "Nhap thong tin nhan vien:\n";
	cout << "\nNhap ma NV: ";
	getline(cin, nv.maNV);
	cout << "\nNhap ho ten nhan vien: ";
	getline(cin, nv.hoten);
	cout << "\nNhap nam sinh: ";
	cin >> nv.namsinh;
	cin.ignore();
	cout << "\nNhap chuc vu nhan vien: ";
	getline(cin, nv.chucvu);
	cout << "\nNhap bac luong: ";
	cin >> nv.luong;
}

void XUAT(NhanVien nv)
{
	cout << "\nXuat thong tin nhan vien: ";
	cout << "\nMa nhan vien: " << nv.maNV;
	cout << "\nHo ten nhan vien: " << nv.hoten;
	cout << "\nNam sinh nhan vien: " << nv.namsinh;
	cout << "\nChuc vu nhan vien: " << nv.chucvu;
	cout << "\nBac luong nhan vien: " << nv.luong << endl;
}

int main()
{
	NhanVien nv;
	NHAP(nv);
	XUAT(nv);
	system("pause");
	return 0;
}