/*
Viết hàm tính số đảo ngược của một số nguyên dương n. Viết chương trình kiểm tra
hàm đã viết
*/

#include <iostream>

using namespace std;

void daonguocso(int n)
{
    int chuso;
    int dao = 0;
    while(n > 0)
    {
        chuso = n % 10;
        n /= 10;
        dao = dao * 10 + chuso;
    }
    cout << dao << endl;
}

int main()
{
    int n;
    cout << "Nhap vao so nguyen duong: ";
    cin >> n;
    if (n <= 0)
    {
        cout << n << " khong phai so nguyen duong";
    } else {
        daonguocso(n);
    }
    system("pause");
    return 0;
}
