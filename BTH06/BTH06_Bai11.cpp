/*
Viết hàm kiểm tra một số nguyên n có phải là số đối xứng (Palindrome) hay không?
Viết chương trình kiểm tra hàm vừa viết. Biết rằng số đối xứng là số có số đảo ngược
của nó bằng chính nó.
*/

#include <iostream>

using namespace std;

int timsodao(int n)
{
    int tam = n;
    int dao = 0;
    int chuso;
    while (tam > 0)
    {
        chuso = tam % 10;
        tam /= 10;
        dao = dao * 10 + chuso;
    }
    return dao;
}

bool ktsodoixung(int n)
{
    if (timsodao(n) == n) {
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
    if (ktsodoixung(n) == true) {
        cout << n << " la so doi xung" << endl;
    } else {
        cout << n << " khong phai so doi xung" << endl;
    }
    system("pause");
    return 0;
}