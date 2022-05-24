/*
Bài 7. Dùng con trỏ viết hàm tìm kiếm 1 số nguyên có tồn tại trong mảng 1 chiều lưu trữ số
nguyên hay không? Nếu có thì trả về vị trí đầu tiên xuất hiện số nguyên đó. Nếu không thì
trả con trỏ về NULL. Sau đó viết chương trình kiểm chứng lại hàm vừa xây dựng
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void *TimX(int *a, int n, int x)
{
    int*p = NULL;
    int vt, dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) == x)
        {
            dem++;
            if (dem == 1)
            {
                vt = i;
            }
        }
    }
    if (dem > 0)
        cout << "Tim thay " << x << " tai " << vt << endl;
    else
        cout << "Khong tim thay " << x << endl;
}

int main()
{
    int *a, n, x;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    a = new int[n];
    cout << "Xuat mang:\n";
    for (int i = 0; i < n; i++)
    {
        *(a + i) = rand() % 10;
        cout << *(a + i) << " ";
    }
    cout << endl;
    cout << "Nhap phan tu x can tim: ";
    cin >> x;
    cout << "Ket qua tim kiem trong mang: " << endl;
    TimX(a, n, x);
    delete []a;
    a = nullptr;
    system("pause");
    return 0;
}