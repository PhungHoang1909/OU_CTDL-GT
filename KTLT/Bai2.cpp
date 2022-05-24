/*
Yêu cầu 1 (0.5 điểm): Định nghĩa kiểu dữ liệu struct SP gồm các thông tin sau: mã
sản phẩm, tên sản phẩm, tên kho, đơn giá, số lượng. Trong đó mã sản phẩm, tên sản
phẩm và tên kho là chuỗi kiểu mảng kí tự (tối đa 30 ký tự); đơn giá là số thực, số
lượng là số nguy
*/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct SP
{
    char masp[31], tensp[31], tenkho[31];
    double dongia;
    int soluong;
};

/*
Yêu cầu 2 (1 điểm): Viết hàm cho phép người dùng nhập vào thông tin của nhiều sản
phẩm với đầy đủ các nội dung như kiểu dữ liệu SP đã định nghĩa ở trên.
*/

void nhap1SP(SP &sp)
{
    cin.ignore();
    cout << "Nhap ma SP: ";
    cin.getline(sp.masp, 30);
    cout << "Nhap ten SP: ";
    cin.getline(sp.tensp, 30);
    cout << "Nhap ten kho: ";
    cin.getline(sp.tenkho, 30);
    cout << "Nhap don gia: ";
    cin >> sp.dongia;
    cout << "Nhap so luong: ";
    cin >> sp.soluong;
}

void nhapDSSP(SP *&ds, int &n)
{
    cout << "Nhap SLSP: ";
    cin >> n;
    ds = new SP[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin san pham thu " << i + 1 << endl;
        nhap1SP(*(ds+i));
    }
}

/*
Yêu cầu 3 (1 điểm): Viết hàm xuất lại toàn bộ thông tin của từng sản phẩm theo sắp
xếp đơn giá tăng dầ
*/

void xuat1SP(SP sp)
{
    cout << "Ma SP: " << sp.masp << endl;
    cout << "Ten SP: " << sp.tensp << endl;
    cout << "Ten Kho: " << sp.tenkho << endl;
    cout << "Don gia: " << sp.dongia << endl;
    cout << "So luong: " << sp.soluong << endl;
}

void SapXep(SP sp[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {    
            if(sp[i].dongia > sp[j].dongia)
            {
                SP temp = sp[i];
                sp[i] = sp[j];
                sp[j] = temp;
            }
        }
    }       
}

void xuatSPTD(SP sp[], int n)
{
    cout << "\nXuat san pham tang dan theo don gian:\n";
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {    
            if(sp[i].dongia > sp[j].dongia)
            {
                SP temp = sp[i];
                sp[i] = sp[j];
                sp[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Xuat sp thu " << i + 1 << endl;
        xuat1SP(sp[i]);
    }
}

/*
Yêu cầu 4 (1 điểm): Viết hàm đếm xem có bao nhiêu sản phẩm có tên sản phẩm bắt
đầu bằng chữ B ? Nếu không có trả về số 0.
*/

int Dem_Chu_a(char *chuoi)
{
	int length=strlen(chuoi), dem=0;
	for(int i=0; i<length; i++)
		if(chuoi[i]=='C') 
			dem++;
	return dem;
}


int main()
{
    SP *sp;
    int n;
    nhapDSSP(sp, n);
    xuatSPTD(sp , n);
    cout << "So luong san pham bat dau bang chu B: " << Dem_Chu_a(sp->tensp);
    cout << endl;
    return 0;
}