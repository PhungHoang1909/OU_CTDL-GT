/*
Bài 1. Viết chương trình nhập vào 2 số nguyên a và b. Tính tổng 2 số này. Sau đó ghi kết
quả tổng xuống file BT1.txt. Mở file BT1.txt để kiểm tra kết quả ghi
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b, tong;
    ofstream outFile;
    outFile.open("BT1.txt", ios::out);
    if(outFile.is_open())
    {
        cout << "Nhap 2 so nguyen a b: ";
        cin >> a >> b; 
        tong = a + b;
        outFile << tong << endl;
        outFile.close();
        cout << "Ghi File thanh cong!" << endl;
    }
    else
        cout << "Ghi File khong thanh cong!" << endl;
    system("pause");
    return 0;
}