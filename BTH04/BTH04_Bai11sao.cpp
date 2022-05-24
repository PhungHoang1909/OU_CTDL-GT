// chuyển hệ 10 sang hệ 2;

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int bin = 0;
    int i = 0;
    int dec, sodu;
    cout << "Nhap vao he 10: ";
    cin >> dec;
    while (dec > 0)
    {
        sodu = dec % 2;
        bin = bin + sodu * pow(10.0, i);
        dec /= 2;
        i++;
    }
    cout << "Ket qua nhi phan: " << bin << endl;
    system("pause");
    return 0;
}