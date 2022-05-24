#include<iostream>

using namespace std;

int main()
{
    double dtb;
    cout << "Nhap diem trung binh: ";
    cin >> dtb;
    if (dtb >= 5.0 && dtb <= 10.0)
    {
        cout << "Dau !" << endl; 
    } else if (dtb >= 0 && dtb <= 5) {
        cout << "Rot !" << endl;
    } else {
        cout << "Diem trung binh khong hop le" << endl;
    }
    system("pause");
    return 0;
}