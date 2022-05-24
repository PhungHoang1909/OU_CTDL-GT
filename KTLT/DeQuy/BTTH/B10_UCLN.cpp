/*
Bước 1: nếu b = 0 thì trả về kết quả là a và kết thúc, ngược lại sang bước 2.
Bước 2: chia a cho b và gán d là số dư. Sang bước 3
Bước 3: gán giá trị b cho a và d cho b. Quay lại bước 1.
*/

#include <iostream>

using namespace std;

int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    else 
    {
        int d = a % b;
        a = b;
        b = d;
    }
}

int main()
{
    int a, b;
    do
    {
        cout << "Nhap vao 2 so nguyen: ";
        cin >> a >> b;
        if (a < 0 || b < 0)
            cout << "Nhap sai. Nhap lai!" << endl;
    } while (a < 0 || b < 0);
    cout << "UCLN cua " << a << " va " << b << ": " << UCLN(a, b);
    return 0;
}