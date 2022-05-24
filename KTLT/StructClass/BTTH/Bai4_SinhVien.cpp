/*
Bài 4. Định nghĩa kiểu dữ liệu SinhVien gồm các thông tin:
- Mã số sinh viên kiểu string
- Họ tên kiểu string
- Địa chỉ kiểu string
- Năm sinh kiểu int
- Điểm toán kiểu double
- Điểm văn kiểu double
- Điểm ngoại ngữ kiểu double
Bài tập thực hành Kỹ thuật lập trình
Viết các hàm:
- Nhập vào thông tin của sinh viên trong 1 lớp học (sĩ số không quá 45).
- Xuất lại thông tin của sinh viên nào do người dùng yêu cầu (thông qua việc nhập
số thứ tự của sinh viên).
- Tính điểm trung bình và xuất lại thông tin mã số sinh viên, họ tên và điểm trung
bình của từng sinh viên. Biết:
điểm trung bình = ( (điểm toán + điểm văn) * 2 + điểm ngoại ngữ)/5
- Xếp loại sinh viên:
Nếu điểm trung bình từ 8 trở lên thì xếp loại là “Giỏi”
Nếu điểm trung bình từ 6.5 đến < 8 thì xếp loại là “Khá”
Nếu điểm trung bình từ 5 đến < 6.5 thì xếp loại là “TB”
Nếu điểm dưới 5 thì xếp loại “Dưới TB”
- Viết hàm main kiểm chứng chương trình.
*/

#include <iostream>
#include <string>

using namespace std;

struct SinhVien
{
	string maSV;
	string hotenSV;
	string diachi;
	int namsinh;
	double dtoan;
	double dvan;
	double dnn;
};

void Nhap(SinhVien *sv, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
		cout << "Ma Sinh vien: ";
		getline(cin, sv[i].maSV);
        cin.ignore();
        cout << "Ho ten Sinh vien: ";
        getline(cin, sv[i].hotenSV);
        cin.ignore();
        cout << "Dia chi Sinh vien: ";
        getline(cin, sv[i].diachi);
        cin.ignore();
        cout << "Nhap diem toan - van - anh: ";
        cin.ignore();
        cin >> sv[i].dtoan >> sv[i].dvan >> sv[i].dnn;
	}
}

void Xuat(SinhVien *sv, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Sinh vien thu " << i + 1 << endl;
        cout << "Ma SV: " << sv[i].maSV << endl;
        cout << "Ho ten SV: " << sv[i].hotenSV << endl;
        cout << "Dia chi SV: " << sv[i].diachi << endl;
        cout << "Diem Toan: " << sv[i].dtoan << endl;
        cout << "Diem Van: " << sv[i].dvan << endl;
        cout << "Diem Anh: " << sv[i].dnn << endl;
    }
}

int DTB(SinhVien sv)
{
    int dtb = (((sv.dtoan + sv.dvan) * 2 + sv.dnn)/5);
    return dtb;
}

void XuatDTB(SinhVien *sv, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Sinh vien thu " << i + 1 << endl;
        cout << "Ho ten: " << sv[i].hotenSV << endl;
        cout << "DTB: " << DTB(sv[i]);
    }
}

void XL_SV(SinhVien *sv, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (DTB(sv[i]) > 8)
            cout << sv[i].hotenSV << " Xep loai Gioi" << endl;
        else if (DTB(sv[i]) > 6.5 && DTB(sv[i]) < 8)
            cout << sv[i].hotenSV << "X ep loai Kha" << endl;
        else if (DTB(sv[i]) > 5 && DTB(sv[i]) < 6.5)
            cout << sv[i].hotenSV << " Xep loai TB" << endl;
        else if (DTB(sv[i]) < 5)
            cout << sv[i].hotenSV << " Duoi Trung binh" << endl;
    }
}

int main()
{
    SinhVien *sv;
    int n;
    do
    {
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
        if (n > 45 || n < 0)
            cout << "Nhap sai! Nhap lai!" << endl;
    } while (n > 45 || n <  0);
    sv = new SinhVien[n];
    Nhap(sv, n);
    Xuat(sv, n);
    cout << "Diem trung binh: " << endl;
    XuatDTB(sv, n);
    cout << "Xep loai sinh vien: " << endl;
    XL_SV(sv, n);
    delete[] sv;
    sv = 0;
    system("pause");
    return 0;
}