// Định nghĩa kiểu dữ liệu MaTran gồm các thông tin:
// - Số dòng, số cột kiểu int
// - Con trỏ kiểu trỏ đến mảng 2 chiều lưu trữ số nguyên.
// Viết chương trình thực hiện các việc sau:
// - Phát sinh ngẫu nhiên giá trị cho 1 biến kiểu MaTran.
// - Xuất giá trị đang lưu trữ trong mảng 2 chiều của biến kiểu MaTran.
// - Tính tổng các phần tử nào là số đối xứng trong mảng 2 chiều của biến kiểu
// MaTran.

#include <iostream>
#include <cstdlib>
#include<iomanip>
#include<cmath>

using namespace std;

struct MaTran
{
    int n, m;
    int **a;
};

void NhapMaTran(MaTran &mt)
{
    mt.n = mt.m = 0;
    mt.a = NULL;
    cout << "Nhap so dong: ";
    cin >> mt.n;
    cout << "Nhap so cot: ";
    cin >> mt.m;
    mt.a = new int*[mt.n];
    for (int i = 0; i < mt.n; i++)
    {
        mt.a[i] = new int[mt.m];
    }
    for (int i = 0; i < mt.n; i++)
    {
        for (int j = 0; j < mt.m; j++)
        {
            mt.a[i][j] = rand() % 10;
        }
    }
}

void XuatMaTran(MaTran mt)
{
    for (int i = 0; i < mt.n; i++)
    {
        for (int j = 0; j < mt.m; j++)
        {
            cout << setw(3) << mt.a[i][j];
        }
        cout << endl;
    }
}

int TinhTongDoiXung(MaTran mt)
{
    int tong = 0;
    for (int i = 0; i < mt.n; i++)
    {
        for (int j = 0; j < mt.m; j++)
        {
            if (mt.a[i][j] == mt.a[j][i])
            {
                tong += mt.a[i][j];
            }
        }
    }
    return tong;
}

int main()
{
    MaTran mt;
    cout << "\nNhap ma tran" << endl;
    NhapMaTran(mt);
    XuatMaTran(mt);
    cout << "\nTong cac phan tu doi xung: " << TinhTongDoiXung(mt);
    return 0;
}