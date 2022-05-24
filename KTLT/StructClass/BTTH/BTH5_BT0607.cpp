#include <iostream>
#include <conio.h>
#include <string>
#include <cstring>
using namespace std;
struct SanPham
{
	char maSP[11];
	string tenSP;
	double dongia;
	int hangton;
};
void Nhap1SP(SanPham &sp)
{
	cin.ignore();
	cout << "Nhap ma SP: ";
	cin.getline(sp.maSP, 11);
	cout << "Nhap ten SP: ";
	getline(cin, sp.tenSP);
	cout << "Nhap don gia: ";
	cin >> sp.dongia;
	cout << "Nhap so luong ton kho: ";
	cin >> sp.hangton;
}
void NhapDSSP(SanPham*& ds, int& n)
{
	cout << "Nhap so luong san pham: ";
	cin >> n;
	while (n <= 0 || n > 30)
	{
		cout << "Nhap sai. Nhap lai: ";
		cin >> n;
	}
	ds = new SanPham[n];
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "\nNhap thong tin san pham thu " << i + 1 << "\n";
		Nhap1SP(*(ds+i));
	}
}
void Xuat1SP(SanPham sp)
{
	cout << "Ma SP: " << sp.maSP << endl
		<< "Ten SP: " << sp.tenSP << endl
		<< "Don gia: " << sp.dongia << endl
		<< "SL ton kho: " << sp.hangton << endl;
}
void XuatDSSP(SanPham* ds, int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Thong tin san pham thu " << i + 1 << "\n";
		Xuat1SP(*(ds+i));
	}
}
void XoaTTSP(SanPham* ds, int &n,int vitri)
{
	for (int i = vitri; i <= n - 1; i++)
		*(ds + vitri - 1) = *(ds + vitri);
	n--;
}
void HoanDoi(SanPham a, SanPham b)
{
	SanPham tam;
	tam = a;
	a = b;
	b = tam;
}
void SuaTTSP(SanPham* ds, int n)
{
	int x, y;
	cout << "Nhap san pham can sua: ";
	cin >> x;
	do {
		system("cls");
		cout << "Chon thong tin san pham can sua\n"
			<< "1/ Ma SP\n"
			<< "2/ Ten SP\n"
			<< "3/ Don gia SP\n"
			<< "4/ So luong ton kho\n"
			<< "5/ Toan bo\n"
			<< "6/ Hoan tat chinh sua\n"
			<< "Ban chon: ";
		cin >> y;
		switch (y)
		{
		case 1:
			cin.ignore();
			cout << "Ma SP: ";
			cin.getline((*(ds + x - 1)).maSP, 11);
			break;
		case 2:
			cin.ignore();
			cout << "Ten SP: ";
			getline(cin, (*(ds + x - 1)).tenSP);
			break;
		case 3:
			cout << "Don gia SP: ";
			cin >> (*(ds + x - 1)).dongia;
			break;
		case 4:
			cout << "So luong ton kho SP: ";
			cin >> (*(ds + x - 1)).hangton;
			break;
		case 5:
			Nhap1SP((*(ds + x - 1)));
			break;
		default:
			cout << "Hoan tat sua thong tin SP\n";
			break;
		}
		_getch();
	} while (y >= 1 && y <= 5);
}
void SapXepSPTangDan(SanPham* ds, int n) // Theo so luong ton kho
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if ((*(ds + i)).hangton > (*(ds + j)).hangton)
				HoanDoi(*(ds + i), *(ds + j));
}
int main()
{
	SanPham* ds = 0;
	int n;
	int chon;
	bool input = false;
	do {
		system("cls");
		cout << "Chon 1 trong cac thao tac duoi day\n"
			<< "1/ Nhap thong tin SP\n"
			<< "2/ Xuat thong tin SP\n"
			<< "3/ Sua thong tin SP\n"
			<< "4/ Xoa thong tin SP\n"
			<< "5/ Sap xep SP theo SL ton kho tang dan\n"
			<< "6/ Thoat\n"
			<< "Ban chon: ";
		cin >> chon;
		cout << endl;
		switch (chon)
		{
		case 1:
			NhapDSSP(ds, n);
			input = true;
			break;
		case 2:
			if (input)
				XuatDSSP(ds, n);
			else
				cout << "Vui long nhap thong tin SP";
			break;
		case 3:
			if (input)
				SuaTTSP(ds, n);
			else
				cout << "Vui long nhap thong tin SP";
			break;
		case 4:
			if (input)
			{
				int viTri;
				cout << "Nhap vi tri san pham can xoa: ";
				cin >> viTri;
				while (viTri <= 0 && viTri > n)
				{
					cout << "Nhap sai. Nhap lai: ";
					cin >> viTri;
				}
				XoaTTSP(ds, n, viTri);
				cout << "Xoa thong tin san pham thu " << viTri << " thanh cong\n";
			}
			else
				cout << "Vui long nhap thong tin SP";
			break;
		case 5:
			if (input)
			{
				SapXepSPTangDan(ds, n);
				cout << "Sap xep thanh cong";
			}
			else
				cout << "Vui long nhap thong tin SP";
			break;
		default:
			delete[]ds;
			ds = NULL;
			break;
			cout << "Thoat chuong trinh\n";
	}
	_getch();
	} while (chon >= 1 && chon <= 5);
}