/*
Bài 5. Định nghĩa kiểu dữ liệu Sach gồm các thông tin sau:
- Tên sách kiểu mảng 1 chiều char, tối đa 20 ký tự.
- Tên tác giả kiểu mảng 1 chiều char, tối đa 20 ký tự.
- Ngày tháng năm xuất bản kiểu struct NTN (ngày, tháng, năm đều là số
nguyên)
Viết các hàm sau:
- Nhập vào thông tin của tối đa 50 quyển sách.
- Xuất lại thông tin của quyển sách nào có tên tác giả là “Tran Dung”
*/

#include <iostream>
#include <cstring>
using namespace std;

struct NTN
{
    int ngay, thang, nam;
};

struct Sach
{
    char tensach[21];
    char tentg[21];
    NTN ngayxb;
};

void Nhap1Sach(Sach &s)
{
    cin.ignore();
    cout << "Nhap ten sach: ";
    cin.getline(s.tensach, 21);
    cout << "Nhap ten tac gia: ";
    cin.getline(s.tentg, 21);
    cout << "Nhap ngay thang nam xuat ban: ";
    cin >> s.ngayxb.ngay >> s.ngayxb.thang >> s.ngayxb.nam;
}

void NhapDSSach(Sach ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "--NHAP THONG TIN CUA SACH THU " << i + 1 << "--\n";
        Nhap1Sach(ds[i]);
    }
}

void Xuat1Sach(Sach s)
{
    cout << "+ Ten sach: " << s.tensach << endl;
    cout << "+ Ten tac gia: " << s.tentg << endl;
    cout << "+ Ngay thang nam xuat ban: " << s.ngayxb.ngay << "/" << s.ngayxb.thang << "/" << s.ngayxb.nam << endl;
}

int main()
{
    const int maxsize = 50;
    int n;
    int dem = 0;
    Sach ds[maxsize];
    do
    {
        cout << "Nhap so luong sach: ";
        cin >> n;
        if (n <= 0 || n > maxsize)
            cout << "Chi duoc nhap toi da " << maxsize << endl;
    } while (n <= 0 || n > maxsize);
    NhapDSSach(ds, n);  
    for (int i = 0; i < n; i++)
        if ( !strcmp(ds[i].tentg, "Tran Dung")) 
        {
            dem++;
            if (dem == 1)
            {
                cout << "--THONG TIN CAC QUYEN SACH CUA TAC GIA TRAN DUNG: "<< endl;
                Xuat1Sach(ds[i]);
            }
            else
                {
                    cout << "+ Quyen thu " << dem << ": " << endl;
                    Xuat1Sach(ds[i]);
                }
        }
    if (dem == 0)
        cout << "Khong co sach cua Tran Dung" << endl;
        system("pause");
    return 0;
}