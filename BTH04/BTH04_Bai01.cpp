// Viết chương trình nhận vào 1 số nguyên n ( n > 0 ). Tính và xuất ra màn hình kết
// quả tổng các số từ 1 đến n.

#include <iostream>

using namespace std;

int main()
{
    int n;
    int tong = 0;
    int i = 1;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if (n > 0)
    {
        while (i <= n) 
        {
            tong += i;
            i++;
        }
        cout << "Tong tu 1 den " << n << " la: " << tong << endl;
    } else cout << "Nhap sai" << endl;
    system("pause");
    return 0;
}