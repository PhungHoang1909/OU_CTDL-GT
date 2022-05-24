/*
Bài 2. Định nghĩa kiểu dữ liệu PhanSo gồm tử số và mẫu số (số nguyên). Sau đó viết
chương trình dùng kiểu mới định nghĩa này để xây dựng các hàm tính tổng, hiệu, tích,
thương của 2 phân số.
Lưu ý: phân số chỉ có nghĩa khi mẫu số khác 0.
*/

#include <iostream>
#include <cmath>

using namespace std;

struct PhanSo
{
	int TS;
	int MS;
};

void NhapPS(PhanSo &PS)
{
	cout << "Nhap tu so: ";
	cin >> PS.TS;
	do
	{
		cout << "Nhap mau so: ";
		cin >> PS.MS;
		if (PS.MS == 0)
			cout << "Nhap sai! Nhap lai\n";
	} while (PS.MS == 0);
}

void XuatPS(PhanSo PS)
{
	cout << PS.TS << "/" << PS.MS;
}

int UCLN(int a, int b)
{
	a = abs(a); b = abs(b);
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a;
}

PhanSo ToiGian(PhanSo PS)
{
	PhanSo kq;
	int d = UCLN(PS.TS, PS.MS);
	kq.TS = PS.TS / d;
	kq.MS = PS.MS / d;
	return kq;
}

PhanSo CongPS(PhanSo P1, PhanSo P2)
{
	PhanSo PC;
	PC.TS = (P1.TS*P2.MS + P2.TS*P1.MS);
	PC.MS = P1.MS*P2.MS;
	PC = ToiGian(PC);
	return PC;
}

PhanSo TruPS(PhanSo P1, PhanSo P2)
{
	PhanSo PT;
	PT.TS = (P1.TS*P2.MS - P2.TS*P1.MS);
	PT.MS = P1.MS*P2.MS;
	if (PT.TS != 0)
		PT = ToiGian(PT);
	return PT;
}

PhanSo NhanPS(PhanSo P1, PhanSo P2)
{
	PhanSo PN;
	PN.TS = P1.TS * P2.TS;
	PN.MS = P1.MS * P2.MS;
	PN = ToiGian(PN);
	return PN;
}

PhanSo ChiaPS(PhanSo P1, PhanSo P2)
{
	PhanSo PC;
	PC.TS = P1.TS * P2.MS;
	PC.MS = P1.MS * P2.TS;
	PC = ToiGian(PC);
	return PC;
}

int main()
{
	PhanSo a, b, kq;
	cout << "Nhap phan so thu nhat: " << endl;
	NhapPS(a);
	cout << "Nhap phan so thu hai: " << endl;
	NhapPS(b);
	cout << "\nTong hai phan so: ";
	kq = CongPS(a, b);
	XuatPS(a); cout << " + "; XuatPS(b); cout << " = "; XuatPS(kq);
	cout << "\nHieu hai phan so: ";
	kq = TruPS(a, b);
	XuatPS(a); cout << " - "; XuatPS(b); cout << " = "; XuatPS(kq);
	cout << "\nNhan hai phan so: ";
	kq = NhanPS(a, b);
	XuatPS(a); cout << " * "; XuatPS(b); cout << " = "; XuatPS(kq);
	cout << "\nChia hai phan so: ";
	kq = ChiaPS(a, b);
	XuatPS(a); cout << " / "; XuatPS(b); cout << " = "; XuatPS(kq);
	cout << endl;
	system("pause");
	return 0;
}