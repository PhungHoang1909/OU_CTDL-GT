#include <iostream>

using namespace std;

int main()
{
    int thang;
    cout << "Nhap thang:";
    cin >> thang;
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
            cout << "So ngay cua thang 2 la 28 hoac 29" << endl;
            break;
        }
        default:
        {
            cout << "So thang khong hop le" << endl;
        }
    }
    system("pause");
    return 0;
}