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

const int MAX = 20;

struct NTN
{
    int ngay, thang, nam;
};

struct Sach
{
    char tensach[MAX];
    char tacgia[MAX];
    NTN ngayxb;
};

void Nhap(Sach *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap sach thu " << i + 1 << endl;
        cout << "Nhap ten sach: ";
        cin.ignore();
        cin.getline(s[i].tensach, 20);
        cout << "Nhap ten tac gia: ";
        cin.getline(s[i].tacgia, 20);
        cout << "Nhap ngay thang nam XB: ";
        cin >> s[i].ngayxb.ngay >> s[i].ngayxb.thang >> s[i].ngayxb.nam;
    }
}

void Xuat(Sach *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Sach thu " << i + 1 << endl;
        cout << "Ten sach: " << s[i].tensach << endl;
        cout << "Tac gia: " << s[i].tacgia << endl;
        cout << "Ngay: " << s[i].ngayxb.ngay << "/" << s[i].ngayxb.thang << "/" << s[i].ngayxb.nam << endl;
    }
}

void XuatTG(Sach *s, int n)
{
    for (int i = 0; i < n; i++)
        if (strcmp(s[i].tacgia, "Tran Dung") == 0)
        {
            cout << s[i].tensach << " ";
        }
}

int main()
{
    Sach s[50];
    int n;
    do
    {
        cout << "Nhap so luong sach: ";
        cin >> n;
        if (n < 0 || n > 50)
            cout << "Nhap sai, nhap lai!"; 
    } while (n < 0 || n > 50);
    Nhap(s, n);
    Xuat(s, n);
    cout << "Xuat sach cua tac gia Tran Dung: " << endl;
    XuatTG(s, n);
    cout << endl;
    system("pause");
    return 0;
}