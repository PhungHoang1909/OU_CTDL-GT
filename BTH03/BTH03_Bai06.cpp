// Năm nhuần còn là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100 

#include <iostream>

using namespace std;

int main() 
{
    int nam;
    cout << "Nhap nam: ";
    cin >> nam;
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
        cout << "Nam nhuan" << endl;
    } else {
        cout << "Nam khong nhuan" << endl;
    }
    system("pause");
    return 0;
}
