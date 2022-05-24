// Lưu ý: phép chia cho 0 thì phải thông báo là lỗi chia 0. 
// Phép chia thực hiện lấy kết quả có 2 chữ số thập phân.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    char phep;
    cout << "Nhap 2 so nguyen va 1 phep toan ";
    cin >> a >> b >> phep;
    switch(phep) 
    {
        case '+':
        {
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        }
        case '-':
        {
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        }
        case '*':
        {
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        }
        case '/':
        {
            if (b == 0) {
                cout << "Loi chia 0" << endl;
            } else {
                cout << a << " / " << b << " = " << setprecision(2) << fixed << a / b << endl;
            }
            break;
        }
        default:
        {
            cout << "Phep toan khong hop le" << endl;
        }
    }
    system("pause");
    return 0;
}