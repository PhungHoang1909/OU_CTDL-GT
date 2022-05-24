#include <iostream>

using namespace std;

int main()
{
    int thang, nam;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    switch(thang)
    {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
        {
            cout << "So ngay cua thang " << thang << " la 31" << endl;
            break;
        }
        case 4: 
        case 6: 
        case 9: 
        case 11:
        {
            cout << "So ngay cua thang " << thang << " la 30" << endl;
            break;
        }
        case 2:
        {
            if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
                cout << "So ngay cua thang 2 " << " nam " << nam << " la 29" << endl;
            } else {
                cout << "So ngay cua thang 2 " << " nam " << nam << " la 28" << endl;
            }
            break;
        }
        default:
        {
            cout << "Nhap sai !" << endl;
        }
    }
    system("pause");
    return 0;
}