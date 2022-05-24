/* Viết chương trình nhận vào 1 số nguyên n. Xuất ra màn hình thông báo n có phải
là số nguyên tố hay không? Biết rằng số nguyên tố là số từ 2 trở lên, chỉ chia hết
cho 1 và cho chính bản thân nó. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    bool nguyento = true;
    cout << "Nhap vao so nguyen: ";
    cin >> n;
    if (n >= 2)
    {
        int i = 2;
        while (i <= sqrt(static_cast<double>(n)))
        {
            if (n % i == 0) {
                nguyento = true;
            }
            i++;
        }
    } else {
        nguyento = false;
    }
    if (nguyento == true) {
        cout << n << " la so nguyen to " << endl;
    } else {
        cout << n << " khong phai so nguyen to" << endl;
    }
    system("pause");
    return 0;
}