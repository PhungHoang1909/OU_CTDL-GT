/*
5. Định nghĩa kiểu dữ liệu SinhVien gồm các thông tin:
 Họ tên kiểu string;
 Ngày tháng năm sinh kiểu NTN (struct NTN chứa từng thông tin ngày, tháng,
năm đều là kiểu số nguyên);
 Điểm toán kiểu số thực.
Viết chương trình:
• Nhập thông tin cho toàn bộ sinh viên của 1 lớp học (tối đa 30 sinh viên). Lưu trữ
toàn bộ thông tin 30 sinh viên dưới dạng mảng chứa từng giá trị kiểu SinhVien
bằng cấp phát động.
• Xuất lại toàn bộ thông tin của sinh viên nào có điểm toán lớn hơn điểm trung
bình của cả lớp
*/

#include <iostream>
#include <string>

using namespace std;

struct NTN
{
	int ngay, thang, nam;
};

struct SinhVien
{
	string hoten;
	NTN ngaysinh;
	double diem;
};

int main()
{
	SinhVien *sv;
	int n;
	double tong = 0;
	do
	{
		cout << "Nhap so luong SV: ";
		cin >> n;
		if (n > 30 || n <= 0)
			cout << "Nhap sai nhap lai\n";
	} while (n > 30 || n <= 0);
	sv = new SinhVien[n];
	cout << "Nhap sinh vien:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap sinh vien thu " << i + 1 << endl;
		cout << "Ho ten SV: ";
		cin.ignore();
		getline(cin, sv[i].hoten);
		cout << "Ngay sinh SV: ";
		cin >> sv[i].ngaysinh.ngay;
		cout << "Thang sinh SV: ";
		cin >> sv[i].ngaysinh.thang;
		cout << "Nam sinh SV: ";
		cin >> sv[i].ngaysinh.nam;
		cout << "Diem: ";
		cin >> sv[i].diem;
		tong += sv[i].diem;
	}

	cout << "\nDanh sach sinh vien diem lon hon trung binh cua lop: ";
	for (int i = 0; i < n; i++)
	{
		if (sv[i].diem > (tong / n))
		{
			cout << "\nSinh vien thu " << i + 1;
			cout << "\nHo ten: " << sv[i].hoten;
			cout << "\nNgay sinh: " << sv[i].ngaysinh.ngay << "/" << sv[i].ngaysinh.thang << "/" << sv[i].ngaysinh.nam << endl;
			cout << "\nDiem: " << sv[i].diem;
		}
		cout << endl;
	}
	delete[]sv;
	sv = 0;
	cout << endl;
	system("pause");
	return 0;
}