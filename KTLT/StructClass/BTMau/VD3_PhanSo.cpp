/*
3. Viết chương trình định nghĩa struct PhanSo gồm các thông tin:
• Tử số kiểu int
• Mẫu số kiểu int
Sau đó viết các hàm:
• Nhập và xuất thông tin 1 phân số.
• Hàm nhận vào 2 phân số, trả về kết quả cộng của 2 phân số này.
• Hàm main: khai báo phân số a, b, c thuộc kiểu PhanSo. Gọi hàm nhập giá
trị cho 2 phân số a và b. Xuất thông tin 2 phân số này. Gọi hàm cộng để trả
về kết quả tổng 2 phân số a và b. Gán kết quả cho phân số c và xuất c.
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

int main()
{
	PhanSo a, b, c;
	cout << "Nhap phan so thu nhat: " << endl;
	NhapPS(a);
	cout << "Nhap phan so thu hai: " << endl;
	NhapPS(b);
	cout << endl;
	cout << "Tong hai phan so: ";
	c = CongPS(a, b);
	XuatPS(a); cout << " + "; XuatPS(b); cout << " = "; XuatPS(c);
	cout << endl;
	system("pause");
	return 0;
}