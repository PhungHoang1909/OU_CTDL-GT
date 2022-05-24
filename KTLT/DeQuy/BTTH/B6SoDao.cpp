/*
Viết hàm đệ qui tính số đảo ngược của một số nguyên không âm. Sau đó xây
dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
*/

#include <iostream>

using namespace std;

int Dao(int n, int so)
{
    if (n == 0)
        return so;
    else 
    {
        so = so*10 + n%10;
        return Dao(n/10, so);
    }
}

void InDao(int n)
{
    if (n < 10)
        cout << n;
    else
    {
        cout << n % 10;
        InDao(n/10);
    }
}

int main()
{
    int n, so = 0;
    do
    {
        cout << "Nhap vao so nguyen n: ";
        cin >> n;
        if (n < 0)
            cout << "Nhap sai. Nhap lai !\n";
    } while (n < 0);  
    cout << "So dao nguoc cua " << n << " la: " << Dao(n, so) << endl;
    cout << "So dao nguoc cua " << n << " la: ";
    InDao(n);
    return 0;  
}