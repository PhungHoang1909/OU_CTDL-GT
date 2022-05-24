/*
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm tính n! (n là số nguyên không âm).
b. Hàm tính tổ hợp n chập k 
c. Hàm in tam giác Pascal có chiều cao h. 
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int tinhgiaithua(int n)
{
    int giaithua = 1;
    for (int i = 1; i <= n; i++) {
        giaithua *= i;
    }
    return giaithua;
}

int tinhtohop(int n, int k)
{
    return tinhgiaithua(n)/(tinhgiaithua(k) * tinhgiaithua(n-k));
}

void tgpascal(int h)
{
    cout << " k   |   0   1   2   3   4   5... " << endl;
    cout << "-----|----------------------------" << endl;
    for (int i = 0; i < h; i++)
    {
        cout << setw(3) << i << "  |";
        for (int j = 0; j <= i; j++) {
            cout << setw(4) << tinhtohop(i, j);
        }
        cout << endl;
    }
}

int main()
{
    // cau a:

    
    int n1;
    do
    {
        cout << "Nhap vao so nguyen n: ";
        cin >> n1;
        if (n1 <= 0) {
            cout << "Nhap sai. Nhap lai!" << endl;
        }
    } while (n1 <= 0);
    if (n1 >0) {
        cout << n1 << "! = " << tinhgiaithua(n1) << endl;
    }
    
    // cau b:
    
    int n2, k;
    cout << "Nhap so vao n va k can tinh: ";
    cin >> n2 >> k;
    cout << "to hop " << n2 << " chap " << k << " = " << tinhtohop(n2, k) << endl;
    

    // cau c:
    int h;
    cout << "Nhap chieu cao: ";
    cin >> h;
    tgpascal(h);
    cout << endl;
    system("pause");
    return 0;
}
