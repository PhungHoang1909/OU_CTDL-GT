/*
Viết hàm kiểm tra 1 giá trị năm nhận vào có phải là năm nhuần hay không. Viết
chương trình kiểm tra lại hàm vừa xây dựng. 
Năm nhuần còn là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100 
*/

#include <iostream>

using namespace std;

bool ktnam(int n)
{
    if (n % 400 == 0 || n % 4 == 0 && n % 100 != 0) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int nam;
    cout << "Nhap nam: ";
    cin >> nam;
    if (ktnam(nam) == true) {
        cout << nam << " la nam nhuan" << endl;
    } else {
        cout << nam << " khong phai nam nhuan" << endl;
    }
    system("pause");
    return 0;
}