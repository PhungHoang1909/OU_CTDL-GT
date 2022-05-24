/*
Viết hàm đệ qui tính tổng các chữ số chẵn/lẻ của một số nguyên không âm. Sau
đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
*/

#include <iostream>

using namespace std;

int DemChan(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
            return 1;
        else
            return 0;
    }
    else
        if (n % 2 == 0)
            return DemChan(n/10) + 1;
        else
            return DemChan(n/10);
}

int DemLe(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
            return 0;
        else
            return 1;
    }
    else
        if (n % 2 == 1)
            return DemLe(n/10) + 1;
        else
            return DemLe(n/10);
}

int TongChan(int n)
{
    if (n == 0)
        return 0;
    else
        if (n % 2 == 0)
            return TongChan(n/10) + n%10;
        else
            return TongChan(n/10);
}

int TongLe(int n)
{
    if (n == 0)
        return 0;
    else
        if (n % 2 == 1)
            return TongLe(n/10) + n%10;
        else
            return TongLe(n/10);
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
    cout << n << " co " << DemChan(n) << " chu so chan va Tong chan = " << TongChan(n) << endl;
    cout << n << " co " << DemLe(n) << " chu so le va Tong le = " << TongLe(n) << endl;
    return 0;
}