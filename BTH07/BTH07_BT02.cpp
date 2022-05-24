/*
Viết hàm tìm ước chung lớn nhất của 2 số nguyên dương bằng thuật giải Euclid.
Thuật giải Euclid:
- Nhận vào: 2 số nguyên dương m và n.
- Trả về: ước chung lớn nhất của m và n.
- Thuật giải:
o Bước 1: nếu n = 0 thì kết quả là m và kết thúc. Ngược lại sang bước 2.
o Bước 2: tính số dư r của phép chia m cho n.
o Bước 3: gán n cho m, r cho n. Quay lại bước 1.
Viết chương trình nhận vào 1 phân số (gồm tử số và mẫu số), xuất kết quả rút gọn
của phân số (dùng hàm ước chung lớn nhất vừa xây dựng).
*/

#include <iostream>
#include <cmath>

using namespace std;

int timUCLN(int m, int n)
{
    int r;
    while (n > 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main()
{
    int tu, mau, a, b;
    do 
    {
        cout << "Nhap tu so va mau so: ";
        cin >> tu >> mau;
        if (mau == 0) {
            cout << "Nhap sai, nhap lai!" << endl;
        }
    } while (mau == 0);
    cout << "Phan so chua toi gian: " << tu << "/" << mau << endl;
    a = abs(tu);
    b = abs(mau);
    tu = tu/timUCLN(a, b);
    mau = mau/timUCLN(a, b);
    cout << "Phan so toi gian: " << tu << "/" << mau << endl;
    system("pause");
    return 0;
}