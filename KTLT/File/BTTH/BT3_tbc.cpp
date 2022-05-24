/*
Bài 3. Viết chương trình ghi xuống file BT3.txt giá trị 3 số nguyên cách nhau bằng dấu
#. Sau đó đọc dữ liệu từ file này để gán giá trị đọc được lần lượt cho 3 biến a, b, c; tính và
xuất giá trị trung bình cộng của 3 số nguyên này.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b, c, a1, b1, c1;
    ofstream outFile;
    ifstream inFile;
    outFile.open("BT3.txt", ios::out);
    if(outFile.is_open())
    {
        cout << "Nhap 3 so nguyen a-b-c: ";
        cin >> a >> b >> c;
        outFile << a << '#' << b << '#' << c << endl;
        outFile.close();
        cout << "Ghi File thanh cong!" << endl;
    }
    else
        cout << "Ghi File khong thanh cong!" << endl;
    inFile.open("BT3.txt", ios::in);
    if(inFile.is_open())
    {
        inFile >> a1;
        inFile.ignore();
        inFile >> b1;
        inFile.ignore();
        inFile >> c1;
        inFile.ignore();
    }
    cout << "Gia tri trung binh = " << (double)(a1 + b1 + c1)/3 << endl;
    system("pause");
    return 0;
}