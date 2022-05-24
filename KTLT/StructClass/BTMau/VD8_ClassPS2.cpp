/*
7. Định nghĩa class PhanSo bao gồm các biến private là tuso, mauso;
các hàm public là cong, tru, nhan, chia, ucln, rutgonps.
Sau đó viết chương trình kiểm chứng
*/

#include <iostream>
#include <cmath>

using namespace std;

class PhanSo
{
private:
	int ts, ms;
public:
	int getts();
	int getms();
	void setts(int a);
	void setms(int b);
	int UCLN(int a, int b);
	PhanSo cong(PhanSo p1, PhanSo p2);
	PhanSo tru(PhanSo p1, PhanSo p2);
	PhanSo nhan(PhanSo p1, PhanSo p2);
	PhanSo chia(PhanSo p1, PhanSo p2);
	PhanSo RutGon(PhanSo PS);
};


int PhanSo::getts()
{
	return ts;
}
int PhanSo::getms()
{
	return ms;
}


void PhanSo::setts(int a)
{
	ts = a;
}
void PhanSo::setms(int b)
{
	ms = b;
}

int PhanSo::UCLN(int a, int b)
{
	a = abs(a); b = abs(b);
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a;
}

PhanSo PhanSo::RutGon(PhanSo PS)
{
		PhanSo kq;
		int d = UCLN(PS.ts, PS.ms);
		kq.ts = PS.ts / d;
		kq.ms = PS.ms / d;
		return kq;
}

PhanSo PhanSo::cong(PhanSo p1, PhanSo p2)
{
	PhanSo PC;
	PC.ts = (p1.ts*p2.ms + p2.ts*p1.ms);
	PC.ms = p1.ms*p2.ms;
	PC = RutGon(PC);
	return PC;
}

PhanSo PhanSo::tru(PhanSo p1, PhanSo p2)
{
	PhanSo PT;
	PT.ts = (p1.ts*p2.ms - p2.ts*p1.ms);
	PT.ms = p1.ms*p2.ms;
	if (PT.ts != 0)
		PT = RutGon(PT);
	return PT;
}

PhanSo PhanSo::nhan(PhanSo p1, PhanSo p2)
{
	PhanSo PN;
	PN.ts = p1.ts * p2.ts;
	PN.ms = p2.ms * p2.ms;
	PN = RutGon(PN);
	return PN;
}

PhanSo PhanSo::chia(PhanSo p1, PhanSo p2)
{
	PhanSo PC;
	PC.ts = p1.ts * p2.ms;
	PC.ms = p1.ms * p2.ts;
	PC = RutGon(PC);
	return PC;
}

int main()
{
	PhanSo ps1, ps2, kq;
	int ts1, ms1, ts2, ms2;
	cout << "Nhap tu so va mau so phan so 1: "; cin >> ts1 >> ms1;
	cout << "Nhap tu so va mau so phan so 2: "; cin >> ts2 >> ms2;
	ps1.setts(ts1);
	ps1.setms(ms1);
	ps2.setts(ts2);
	ps2.setms(ms2);

	kq = kq.cong(ps1, ps2);
	cout << "Tong hai phan so: ";
	cout << ps1.getts() << "/" << ps1.getms() << " + " << ps2.getts() << "/" << ps2.getms() << " = ";
	cout << kq.getts() << "/" << kq.getms() << endl;

	kq = kq.tru(ps1, ps2);
	cout << "Hieu hai phan so: ";
	cout << ps1.getts() << "/" << ps1.getms() << " - " << ps2.getts() << "/" << ps2.getms() << " = ";
	cout << kq.getts() << "/" << kq.getms() << endl;

	kq = kq.nhan(ps1, ps2);
	cout << "Tich hai phan so: ";
	cout << ps1.getts() << "/" << ps1.getms() << " * " << ps2.getts() << "/" << ps2.getms() << " = ";
	cout << kq.getts() << "/" << kq.getms() << endl;

	kq = kq.chia(ps1, ps2);
	cout << "Thuong hai phan so: ";
	cout << ps1.getts() << "/" << ps1.getms() << " / " << ps2.getts() << "/" << ps2.getms() << " = ";
	cout << kq.getts() << "/" << kq.getms() << endl;

	system("pause");
	return 0;
}