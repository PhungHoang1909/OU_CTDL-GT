/*
Bài 8. Viết chương trình gồm các hàm:
- Ghi 3 số nguyên ra file.
- Đọc 3 số nguyên từ file.
- Hàm main kiểm chứng
*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void GhiNum(string &File, int a, int b, int c)
{
    ofstream oFile;
    oFile.open(File, ios::out);
    if(oFile.is_open())
    {
        oFile << a << ' ' << b << ' ' << c << endl;
        oFile.close();
    }
}

void DocNum(string File, int &a, int &b, int &c)
{
    ifstream iFile;
    iFile.open(File, ios::in);
    if(iFile.is_open())
    {
        iFile >> a >> b >> c;
        iFile.close();
    }
}

int main()
{
    int a, b, c, a1, b1, c1;
    string Filename;
    cout << "Nhap 3 so nguyen: ";
    cin >> a >> b >> c;
    cout << "Nhap ten file: ";
    cin >> Filename;
    GhiNum(Filename, a, b, c);
    DocNum(Filename, a1, b1, c1);
    cout << "\nXuat: " << a1 << ' ' << b1 << ' ' << c1 << endl;
    system("pause");
    return 0;
}