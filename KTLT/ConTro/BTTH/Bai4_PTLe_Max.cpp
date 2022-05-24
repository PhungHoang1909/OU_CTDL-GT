/*
Bài 4. Viết chương trình dùng cấp phát động, cho phép:
- Nhập vào 1 mảng 1 chiều lưu trữ số nguyên tối đa 30 phần tử.
- Dùng con trỏ và ký pháp độ dời để xuất ra các phần tử nào là số lẻ trong mảng.
- Trả về địa chỉ của giá trị phần tử lớn nhất trong mảng (giả sử các giá trị trong mảng không
trùng nhau).
*/
#include <iostream>

using namespace std;

int main()
{
    int *a, n, *max;
    do
    {
        cout << "Nhap kich thuoc mang: ";
        cin >> n;
        if (n < 1 || n >= 30)
            cout << "Nhap sai! Nhap lai\n";
    } while (n < 1 || n >= 30);
    a = new int[n];
    cout << "Xuat mang: " << endl;
    for (int i = 0; i < n; i++)
    {
        *(a + i) = rand() % 10;
        cout << *(a + i) << " ";
    }
    cout << endl;
    max = a;
    cout << "Xuat mang le:\n";
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 != 0)
            cout << *(a + i) << " ";
        if (*(a + i) > *max)
            max = (a + i);
    }
    cout << endl;
    cout << "Phan tu lon nhat tai " << max << " mang gia tri = " << *max << endl;
    delete []a;
    a = 0;
    system("pause");
    return 0;
}