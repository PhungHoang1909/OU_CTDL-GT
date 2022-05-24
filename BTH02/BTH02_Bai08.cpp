/*
Một cửa hàng bán đồ gỗ tính giá bán của mỗi mặt hàng bằng giá mua vào cộng
thêm 60%. Viết chương trình yêu cầu nhập vào giá mua của một mặt hàng, sau đó
in ra giá bán của mặt hàng đó
*/

#include<iostream>

using namespace std;

int main()
{
    double giamua, giaban;
    cout << "Nhap gia mua: ";
    cin >> giamua;
    giaban = giamua * 0.6 + giamua;
    cout << "Gia ban cua mat hang: " << giaban << endl;
    system("pause");
    return 0;
}