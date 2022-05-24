/*
Đọc dữ liệu từ file đã ghi ở BT1, sau đó xuất lại thông tin họ tên kèm
với tính tuổi của người đó.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile;
    string Hoten;
    int Namsinh;
    inFile.open("D:\\BT1.txt", ios::in);
    if (inFile.is_open())
    {
        getline(inFile, Hoten, '#');
        inFile >> Namsinh;
        cout << Hoten << endl;
        cout << "Tuoi: " << 2022 - Namsinh;
        inFile.close();
        cout << "\nDoc File thanh cong!" << endl;
    }
    else
        cout << "\nDoc File khong thanh cong!" << endl;;
    system("pause");
    return 0;
}