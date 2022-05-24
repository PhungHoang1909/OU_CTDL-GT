/*
6. Định nghĩa kiểu dữ liệu Kho gồm: tên kho, tải trọng.
Tiến hành dùng cấp phát động để tạo ra nơi lưu trữ cho n kho có
thông tin kiểu struct Kho ( 0 < n < 50 ).
Viết hàm:
+ Nhập đầy đủ dữ liệu của n kho này.
+ Xuất lại đầy đủ thông tin n kho.
+ Xuất tên kho nào còn trống. Biết rằng nếu tải trọng > 10 là còn
trống.
+ main để kiểm chứng toàn bộ chương trình
*/

#include <iostream>
#include <string>

using namespace std;

struct Kho
{
	string tenkho;
	int taitrong;
};

void NhapK(Kho *K, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap kho thu " << i + 1 << endl;
		cout << "Ten Kho: ";
		cin.ignore();
		getline(cin, K[i].tenkho);
		cout << "Tai trong: ";
		cin >> K[i].taitrong;
	}
	cout << endl;
}

void XuatK(Kho *K, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nXuat kho thu: " << i + 1;
		cout << "\nTen kho: " << K[i].tenkho;
		cout << "\nTai trong: " << K[i].taitrong;
	}
}

void XuatKT(Kho *K, int n)
{
	cout << "\nKho con trong: ";
	for (int i = 0; i < n; i++)
	{
		if (K[i].taitrong > 10)
		{
			cout << "\nTen Kho: " << K[i].tenkho;
			cout << "\nTai trong: " << K[i].taitrong;
		}
	}
}

int main()
{
	Kho *k;
	int n;
	do
	{
		cout << "Nhap so luong kho: ";
		cin >> n;
		if (n < 0 || n >= 50)
			cout << "Nhap sai! Nhap lai\n";
	} while (n < 0 || n >= 50);
	k = new Kho[n];
	cout << "\nNhap cac kho:\n";
	NhapK(k, n);
	cout << "\nXuat cac kho:\n";
	XuatK(k, n);
	cout << "\nXuat cac kho con trong:\n";
	XuatKT(k, n);
	delete[]k;
	k = 0;
	cout << endl;
	system("pause");
	return 0;
}