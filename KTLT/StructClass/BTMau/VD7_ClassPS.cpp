/*
Viết chương trình xây dựng class PhanSo gồm:
Private: tử số, mẫu số
Public:
• Hàm trả về giá trị của tử số
• Hàm trả về giá trị của mẫu số
• Hàm thiết lập giá trị cho tử số
• Hàm thiết lập giá trị cho mẫu số
• Hàm tính tích hai phân số.
Sau đó tạo hàm main để kiểm chứng
*/

#include <iostream>
#include <cmath>

using namespace std;

class phanso
{
private:
	int tuso, mauso;
public:
	int getts();
	int getms();
	void setts(int a);
	void setms(int b);
	phanso tich(phanso ps1, phanso ps2);
};


int phanso::getts()
{
	return tuso;
}
int phanso::getms()
{
	return mauso;
}


void phanso::setts(int a)
{
	tuso = a;
}
void phanso::setms(int b)
{
	mauso = b;
}


phanso phanso::tich(phanso ps1, phanso ps2)
{
	phanso kq;
	kq.setts(ps1.tuso * ps2.tuso);
	kq.setms(ps1.mauso * ps2.mauso);
	return kq;
}


int main()
{
	phanso ps1, ps2, kq;
	int ts1, ms1, ts2, ms2;
	cout << "Nhap tu so va mau so phan so 1: "; cin >> ts1 >> ms1;
	cout << "Nhap tu so va mau so phan so 2: "; cin >> ts2 >> ms2;
	ps1.setts(ts1);
	ps1.setms(ms1);
	ps2.setts(ts2);
	ps2.setms(ms2);
	kq = kq.tich(ps1, ps2);
	cout << "Tich hai phan so: ";
	cout << ps1.getts() << "/" << ps1.getms() << " * " << ps2.getts() << "/" << ps2.getms() << " = ";
	cout << kq.getts() << "/" << kq.getms() << endl;
	system("pause");
	return 0;
}