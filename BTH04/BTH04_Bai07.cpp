/*
Viết chương trình có giao diện là một menu lựa chọn 1 trong 4 phép tính (+ - * / )
và lựa chọn thoát. Khi người dùng chọn lựa chọn nào sẽ xử lý tương ứng
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int chon, a, b;
    do {
        cout << "Menu chon: " << endl;
        cout << "1. Phep cong" << endl;
        cout << "2. Phep tru" << endl;
        cout << "3. Phep nhan" << endl;
        cout << "4. Phep chia" << endl;
        cout << "0. Ket thuc" << endl;
        do {
            cout << "Chon chuc nang: ";
            cin >> chon;
            if (chon < 0 || chon > 4) {
                cout << "Chuc nang khong hop le, chon lai!" << endl;
            }
        } while (chon < 0 || chon > 4);
        if (chon >= 1 && chon <= 4)
        {
            cout << "Nhap 2 so: ";
            cin >> a >> b;
            switch(chon)
            {
                case 1:
                {
                    cout << a << " + " << b << " = " << a + b << endl;
                    break;
                }
                case 2:
                {
                    cout << a << " - " << b << " = " << a - b << endl;
                    break;
                }
                case 3:
                {
                    cout << a << " * " << b << " = " << a * b << endl;
                    break;
                }
                case 4:
                {
                    if (b == 0) {
                        cout << "Loi chia 0" << endl;
                    } else {
                        cout << a << " / " << b << " = " << setprecision(2) << fixed << (double)a/b << endl;
                    }
                    break;
                }
                system("pause");
            }
        } else {
            break;
        }
    } while(true);
    return 0;
}