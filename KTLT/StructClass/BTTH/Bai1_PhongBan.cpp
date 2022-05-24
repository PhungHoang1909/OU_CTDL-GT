/*
Bài 1. Định nghĩa kiểu dữ liệu PhongBan gồm các thông tin: mã phòng ban kiểu string,
tên phòng ban kiểu string. Sau đó viết chương trình cho phép nhập và xuất thông tin
của 1 phòng ban cụ thể.
*/

#include <iostream>
#include <string>

using namespace std;

struct PhongBan
{
	string maPB;
	string tenPB;
};

int main()
{
	PhongBan pb;
	cout << "Nhap thong tin phong ban: " << endl;
	cout << "Nhap ma Phong Ban: ";
	getline(cin, pb.maPB);
	cout << "Nhap ten Phong Ban: ";
	getline(cin, pb.tenPB);

	cout << "Xuat thong tin phong ban: " << endl;
	cout << "Ma phong ban: " << pb.maPB << endl;
	cout << "Ten phong ban: " << pb.tenPB << endl;
	system("pause");
	return 0;
}