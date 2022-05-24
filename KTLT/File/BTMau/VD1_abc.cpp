/*
 Viết chương trình nhận vào giá trị 3 số nguyên. Sau đó ghi xuất file giá
trị 3 biến này dưới dạng cách nhau dấu ‘-’.
 Đọc lại 3 giá trị này vào 3 biến khác nhau, tính và xuất kết quả tích 3
số ra màn hình.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outFile;
    ifstream inFile;
    outFile.open("BTVD.txt", ios::app);

    int a, b, c;
    int kq;
    cout << "Nhap 3 so nguyen: ";
    cin >> a >> b >> c;

    // Ghi gia tri 3 so nguyen ra file cach nhau bang "-"
    if (outFile.is_open())
    {
        outFile << a << '-' << b << '-' << c << endl;
        outFile.close();
        cout << "Ghi file thanh cong!" << endl;
    } else
        cout << "Ghi file khong thanh cong!" << endl;

    // Doc gia tri 3 so nguyen tu file cach nhau bang dau '-' va tinh tich
    inFile.open("BTVD.txt");
    if (inFile.is_open())
    {
        inFile >> a;
        inFile.ignore(1);
        inFile >> b;
        inFile.ignore(1);
        inFile >> c;
        kq = a * b * c;
        cout << "Ket qua tich: " << kq << endl;
        inFile.close();
    }
    else
        cout << "Ghi file khong thanh cong" << endl;
    system("pause");
    return 0;
}