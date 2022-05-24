/*
Viết hàm kiểm tra một số nguyên n có phải là số hoàn thiện hay không? Viết chương
trình kiểm tra hàm vừa viết. Biết rằng số hoàn thiện là số có tổng các ước số (kể cả 1)
bằng chính nó. Ví dụ: 6 là số hoàn thiện vì 6 = 1 + 2 + 3 (1, 2, 3 là các ước của 6)
*/


#include <iostream>

using namespace std;

bool ktsohoanthien(int n)
{
    int tong = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0) {
            tong += i;
        }
    }
    if (tong == n) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int n;
    cout << "Nhap vao so nguyen: ";
    cin >> n;
    if (ktsohoanthien(n) ) {
        cout << n << " la so hoan thien" << endl;
    } else {
        cout << n << " khong phai so hoan thien" << endl;
    }
    system("pause");
    return 0;
}