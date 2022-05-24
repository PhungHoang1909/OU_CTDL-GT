/* Viết chương trình nhận vào 1 số nguyên dương n. Xuất ra màn hình số đảo
ngược của n. Ví dụ n là 352 thì số đảo ngược của nó là 253 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    int chuso;
    int tam;
    int dao = 0;
    do {
        cout << "Nhap vao so nguyen duong: ";
        cin >> n;
        if (n <= 0) {
            cout << "Nhap sai, vui long nhap lai" << endl;
        }
    } while(n <= 0);
    tam = n;
    while (tam > 0)
    {
        chuso = tam % 10;
        tam /= 10;
        dao = dao * 10 + chuso;
    }
    cout << "So dao nguoc cua " << n << " la: " << dao << endl;
    system("pause");
    return 0;
}