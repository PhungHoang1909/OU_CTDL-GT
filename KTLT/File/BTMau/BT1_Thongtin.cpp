/*
1. Viết chương trình nhập vào giá trị họ và tên kèm với năm sinh của 1
người. Lưu trữ 2 thông tin này xuống file làm việc. Đảm bảo mỗi thời
điểm file chỉ lưu trữ thông tin 1 người.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream outFile;
    string Hoten;
    int Namsinh;
    cout << "Nhap ho ten: ";
    getline(cin, Hoten);
    cout << "Nhap nam sinh: ";
    cin >> Namsinh;
    outFile.open("D:/BT1.txt", ios::out);
    if(outFile.is_open())
    {
        outFile << Hoten << '#' << Namsinh;
        outFile.close();
        cout << "Ghi File thanh cong!" << endl;
    }
    else 
        cout << "Gho File khong thanh cong!" << endl;
    system("pause");
    return 0;
}