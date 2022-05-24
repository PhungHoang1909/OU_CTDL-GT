/*
Viết hàm kiểm tra 1 số nguyên n có phải là số nguyên tố hay không? Hàm sẽ trả về
true nếu n là số nguyên tố, trả về false nếu n không là số nguyên tố. Viết chương trình
kiểm tra hàm đã viết.
*/

#include <iostream>
#include <cmath>

using namespace std;

bool ktsonguyento(int n)
{
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= sqrt(float(n)); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Nhap vao so nguyen: ";
    cin >> n;
    if (ktsonguyento(n) == true) {
        cout << n << " la so nguyen to" << endl;
    } else {
        cout << n << " khong phai so nguyen to" << endl;
    }
    cout << "So nguye to nho hon " << n << endl;
    for (int i = 2; i <= n; i++)
    {
        if (ktsonguyento(i) == true) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "So khong phai nguyen to nho hon " << n << endl;
    for (int i = 2; i <= n; i++)
    {
        if (ktsonguyento(i) == false) {
            cout << i << " ";
        }
    }
    system("pause");
    return 0;
}