/*  Viết chương trình nhận vào 1 số nguyên n > 0. Xuất ra màn hình các giá trị thừa
số nguyên tố của n. Ví dụ n = 126 thì các thừa số nguyên tố là 2, 3, 3, 7 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    do 
    {
        cout << "Nhap vao so nguyen: ";
        cin >> n;
        if (n <= 0) {
            cout << "Khong hop le. Nhap lai!";
        }
    } while (n <= 0);
    int i = 2;
    do 
    {
        if (n % i == 0) {
            cout << i;
            n /= i;
            if (n > 1) {
                cout << ", ";
            }
        } else {
            i++;
        }
    } while (n > 1);
    cout << endl;
    system("pause");
    return 0;
}