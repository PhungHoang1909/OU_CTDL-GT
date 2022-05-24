#include <iostream>
#include <string>
using namespace std;

struct SanPham
{
    char masp[11];
    string tensp;
    double dongia;
    int soluong;
};

void Nhap1SP(SanPham &sp)
{
    cout << "Nhap ma san pham: "; cin >> sp.masp;
    cout << "Nhap ten san pham: "; getline(cin, sp.tensp);
    cout << "Nhap so luong ton kho: "; cin >> sp.soluong;
}

void NhapDSSP(SanPham *pdssp, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "--NHAP THONG TIN SAN PHAM THU " << i + 1 << endl;
        Nhap1SP(pdssp[i]);
    }
}

void Xuat1SSP(SanPham sp)
{
    cout << "Nhap ma san pham: " << sp.masp << endl;
    cout << "Nhap ten san pham: " << sp.tensp << endl;
    cout << "Nhap so luong ton kho: " << sp.soluong << endl;
}

void XuatDSSP(SanPham *pdssp, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "--THONG TIN SAN PHAM THU " << i + 1 << endl;
        Xuat1SSP(pdssp[i]);
    }
}

void SXTang(SanPham *pdssp, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if ( pdssp[i].soluong > pdssp[j].soluong)
            {
                SanPham tam = pdssp[i];
                pdssp[i] = pdssp[j];
                pdssp[j] = tam;

            }
}

int main()
{
    const int maxsize = 20;
    int n;
    SanPham *pdssp;
    do
    {
        cout << "Nhap so luong san pham: ";
        cin >> n;
        if (n <= 0 || n > maxsize)
            cout << "Nhap lai" << endl;
    } while (n <= 0 || n > maxsize);
    pdssp = new SanPham[n];
    NhapDSSP(pdssp, n);
    cout << "THONG TIN SAN PHAM VUA NHAP" << endl;
    XuatDSSP(pdssp, n);
    SXTang(pdssp, n);
    cout << "THONG TIN SAN PHAM SAP XEP Tang" << endl;
    delete[] pdssp;
    return 0;
}