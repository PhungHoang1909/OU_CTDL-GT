/*
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử), tính và in ra
tổng và giá trị trung bình của các phần tử trong mảng
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a[100], tong = 0, n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    cout << "Xuat mang:";
    for (int i = 0; i < n; i++) 
    {
        a[i] = rand()%10 + 1;
        cout << " " << a[i];
        tong+=a[i];
    }
    cout << endl;
    double tb = (double)tong/n;
    cout << "Tong: " << tong << endl;
    cout << "GTTB: " << tb << endl;
    system("pause");
    return 0;
}