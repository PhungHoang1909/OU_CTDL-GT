/*
Viết hàm đệ qui tính giai thừa của một số nguyên không âm. Sau đó xây dựng
chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
*/

#include <iostream>

using namespace std;

int giaithua(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else 
        return n * giaithua(n - 1);
}

int main()
{
    int n;
    do
    {
        cout << "Nhap vao 1 so nguyen khong am: ";
        cin >> n;
        if (n < 0)
            cout << "Nhap sai. Nhap lai !\n";
    } while (n < 0);
    cout << n << "! = " << giaithua(n);
    return 0;
}