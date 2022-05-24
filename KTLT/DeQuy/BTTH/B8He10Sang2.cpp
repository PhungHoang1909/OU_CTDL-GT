/*
Viết hàm đệ qui chuyển một số nguyên dương từ hệ thập phân sang nhị phân. Sau
đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
*/

#include <iostream>

using namespace std;

int Dec_Bin(int n)
{
    int a;
    if (n == 0)
        return 0;
    else
    {
        a = n % 2;
        return Dec_Bin(n / 2) * 10 + a;
    }
}

int main()
{
    int he10;
    do
    {
        cout << "Nhap vao so he 10: ";
        cin >> he10;
        if (he10 < 0)
            cout << "Nhap sai. Nhap lai ! ";
    } while (he10 < 0);
    cout << he10 << "(10) = " << Dec_Bin(he10) << endl;
    return 0; 
}