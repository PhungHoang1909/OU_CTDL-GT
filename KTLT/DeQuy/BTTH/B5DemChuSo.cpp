/*
Viết hàm đệ qui đếm số chữ số của một số nguyên không âm. Sau đó xây dựng
chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
*/

#include <iostream>

using namespace std;

int demcs(int n)
{
    if (n < 10)
        return 1;
    else 
        return 1 + demcs(n / 10);
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
    cout << n << " co " << demcs(n) << " chu so ";
    return 0;    
}