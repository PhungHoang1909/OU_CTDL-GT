// /*
// Bài 6. Định nghĩa kiểu dữ liệu SanPham gồm các thông tin như sau:
// - Mã sản phẩm kiểu char (tối đa 10 ký tự)
// - Tên sản phẩm kiểu string.
// - Đơn giá kiểu double
// - Số lượng tồn kho kiểu int
// Viết chương trình dùng cấp phát động và ký pháp độ dời để:
// - Nhập thông tin cho tối đa 30 sản phẩm.
// - Xuất thông tin của các sản phẩm vừa nhập.
// - Sửa thông tin của một sản phẩm bất kỳ do người dùng yêu cầu.
// - Xóa thông tin của một sản phẩm bất kỳ do người dùng yêu cầu.
// - Sắp xếp lại toàn bộ sản phẩm theo trình tự số lượng tồn kho tăng dần.
// */

// #include <iostream>
// #include <string>
// #include <cstring>

// using namespace std;

// struct SanPham
// {
//     char MaSP[10];
//     string TenSP;
//     double DonGia;
//     int SLTK;
// };

// int main()
// {
//     SanPham *sp;
//     int n;
//     do
//     {
//         cout << "Nhap so luong san pham: ";
//         cin >> n;
//         if (n < 0 || n > 30)
//             cout << "Nhap sai, nhap lai! " << endl;
//     } while (n < 0 || n > 30);
//     sp = new SanPham[n];
//     cout << "Xuat thong tin san pham:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << "San pham thu " << i + 1 << endl;
//         cout << "Nhap ma SP: ";
//         cin.ignore();
//         cin >> sp[i].MaSP;
//         cout << "Nhap ten SP: ";
//         cin.ignore();
//         getline(cin, sp[i].TenSP);
//         cout << "Nhap don gia: ";
//         cin >> sp[i].DonGia;
//         cout << "Nhap So luong ton kho: ";
//         cin >> sp[i].SLTK;
//     }
//     cout << endl;
    
//     cout << "Xuat thong tin san pham:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << "San pham thu " << i + 1 << ": " << endl;
//         cout << "Ma San Pham: " << sp[i].MaSP << endl;
//         cout << "Ten San Pham: " << sp[i].TenSP << endl;
//         cout << "Don gia: " << sp[i].DonGia << endl;
//         cout << "So luong ton kho: " << sp[i].SLTK << endl;
//     }

//     cout << "Sua thong tin san pham:\n"; 
//     cout << "Nhap ma san pham can sua:\n";
//     char MaSP[11];
//     cin.ignore();
//     cin.getline(MaSP, 11);
//     for (int i = 0; i < n; i++)
//     {
//         if (strcmp(sp[i].MaSP, MaSP) == 0)
//         {
//             cout << "Nhap ma SP: ";
//             // cin.ignore();
//             cin >> sp[i].MaSP;
//             cout << "Nhap ten SP: ";
//             getline(cin, sp[i].TenSP);
//             cout << "Nhap don gia: ";
//             cin >> sp[i].DonGia;
//             cout << "Nhap So luong ton kho: ";
//             cin >> sp[i].SLTK;
//             break;
//         }
//     }
//     cout << "Thong tin san pham sau khi sua:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << "San pham thu " << i + 1 << ": " << endl;
//         cout << "Ma San Pham: " << sp[i].MaSP << endl;
//         cout << "Ten San Pham: " << sp[i].TenSP << endl;
//         cout << "Don gia: " << sp[i].DonGia << endl;
//         cout << "So luong ton kho: " << sp[i].SLTK << endl;
//     }

//     cout << "Nhap Ma san pham can xoa thong tin:\n";
//     cin.ignore();
//     cin.getline(MaSP, 11);
//     for (int i = 0; i < n; i++)
//     {
//         if ( strcmp(sp[i].MaSP, MaSP) == 0)
//         {
//             sp[i].MaSP[0] = '\0';
//             sp[i].TenSP = "";
//             sp[i].DonGia = 0;
//             sp[i].SLTK = 0;
//             break; 
//         }
//     }
//     cout << "Thong tin san pham sau khi xoa:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << "San pham thu " << i + 1 << ": " << endl;
//         cout << "Ma San Pham: " << sp[i].MaSP << endl;
//         cout << "Ten San Pham: " << sp[i].TenSP << endl;
//         cout << "Don gia: " << sp[i].DonGia << endl;
//         cout << "So luong ton kho: " << sp[i].SLTK << endl;
//     }

//     cout << "Xuat san pham sau khi sap xep:\n";
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (sp[i].SLTK > sp[j].SLTK)
//             {
//                 SanPham temp = sp[i];
//                 sp[i] = sp[j];
//                 sp[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << "San pham thu " << i + 1 << ": " << endl;
//         cout << "Ma San Pham: " << sp[i].MaSP << endl;
//         cout << "Ten San Pham: " << sp[i].TenSP << endl;
//         cout << "Don gia: " << sp[i].DonGia << endl;
//         cout << "So luong ton kho: " << sp[i].SLTK << endl;
//     }
//     system("pause");
//     return 0;
// }

#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include<iomanip>
using namespace std;

struct SanPham
{
    char maSP[11];
    string tenSP;
    double donGia;
    int soLuongTonKho;
};

void Nhap(SanPham &a)
{
    cout << "\n*Nhap ma san pham: ";
    cin.ignore();
    cin.getline(a.maSP, 11);
    cout << "*Nhap ten san pham: ";
    getline(cin, a.tenSP);
    cout << "*Nhap don gia: ";
    cin >> a.donGia;
    cout << "*Nhap so luong ton kho: ";
    cin >> a.soLuongTonKho;
}

void Xuat(SanPham a)
{
    cout << setw(10) << a.maSP << setw(20) << a.tenSP << setw(10) << a.donGia << setw(10) << a.soLuongTonKho << endl;
}

void Sua(SanPham &a)
{
    cout << "\n*Nhap ma san pham: ";
    cin.ignore();
    cin.getline(a.maSP, 11);
    cout << "*Nhap ten san pham: ";
    getline(cin, a.tenSP);
    cout << "*Nhap don gia: ";
    cin >> a.donGia;
    cout << "*Nhap so luong ton kho: ";
    cin >> a.soLuongTonKho;
}

void Xoa(SanPham &a)
{
    a.maSP[0] = '\0';
    a.tenSP = "";
    a.donGia = 0;
    a.soLuongTonKho = 0;
}

void SapXep(SanPham a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].soLuongTonKho > a[j].soLuongTonKho)
            {
                SanPham temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    do
    {
        cout << "\nNhap so luong san pham: ";
        cin >> n;
        if(n < 0 || n > 30)
        {
            cout << "So luong san pham khong hop le. Xin kiem tra lai." << endl;
        }
    } while (n < 1 || n > 30);
    
    SanPham a[30];
    for (int i = 0; i < n; i++)
    {
        Nhap(a[i]);
    }
    cout << "\nThong tin san pham vua nhap: " << endl;
    cout << "|----------------------------------------------------------------------------------------------------|" << endl;
    cout << setw(10) << "Ma san pham |" << setw(20) << "Ten san pham |" << setw(10) << "Don gia |" << setw(10) << "So luong ton kho |" << endl;
    cout << "|----------------------------------------------------------------------------------------------------|" << endl;
    for (int i = 0; i < n; i++)
    {
        Xuat(a[i]);
    }
    cout << "\nNhap ma san pham can sua: ";
    char maSP[11];
    cin.ignore();
    cin.getline(maSP, 11);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].maSP, maSP) == 0)
        {
            Sua(a[i]);
            break;
        }
    }
    cout << "\nThong tin san pham sau khi sua: " << endl;
    cout << "|----------------------------------------------------------------------------------------------------|" << endl;
    cout << setw(10) << "Ma san pham |" << setw(20) << "Ten san pham |" << setw(10) << "Don gia |" << setw(10) << "So luong ton kho |" << endl;
    cout << "|----------------------------------------------------------------------------------------------------|" << endl;
    for (int i = 0; i < n; i++)
    {
        Xuat(a[i]);
    }
    cout << "\nNhap ma san pham can xoa: ";
    cin.ignore();
    cin.getline(maSP, 11);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].maSP, maSP) == 0)
        {
            Xoa(a[i]);
            break;
        }
    }
    cout << "\nThong tin san pham sau khi xoa: " << endl;
    cout << "|----------------------------------------------------------------------------------------------------|" << endl;
    cout << setw(10) << "Ma san pham |" << setw(20) << "Ten san pham |" << setw(10) << "Don gia |" << setw(10) << "So luong ton kho |" << endl;
    cout << "|----------------------------------------------------------------------------------------------------|" << endl;
    for (int i = 0; i < n; i++)
    {
        Xuat(a[i]);
    }
    SapXep(a, n);
    cout << "Thong tin san pham sau khi sap xep: " << endl;
    cout << "|----------------------------------------------------------------------------------------------------|" << endl;
    cout << setw(10) << "Ma san pham |" << setw(20) << "Ten san pham |" << setw(10) << "Don gia |" << setw(10) << "So luong ton kho |" << endl;
    cout << "|----------------------------------------------------------------------------------------------------|" << endl;
    for (int i = 0; i < n; i++)
    {
        Xuat(a[i]);
    }
    system("pause");
    return 0;
}