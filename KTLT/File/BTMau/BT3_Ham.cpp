// Phát triển BT1 và BT2 thành hàm ghi và đọc dữ liệu

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void ghiFile(string &Filename)
{
    ofstream outFile;
    string data;
    cout << "Nhap noi dung: ";
    getline(cin, data);
    outFile.open(Filename, ios::out);
    if(outFile.is_open())
    {
        outFile << data;
        cout << "Ghi file thanh cong: ";
        outFile.close();
    }
    else
        cout << "\nGhi file khong thanh cong: " << endl;
}

void docFile(string Filename)
{
    ifstream inFile;
    string dulieu;
    inFile.open(Filename, ios::in);
    if(inFile.is_open())
    {
        cout << "\nGhi File thanh cong!" << endl;
        getline(inFile, dulieu);
        cout << dulieu;
        inFile.close();
    }
    else
        cout << "\nGhi file khong thanh cong!" << endl;
}

int main()
{
    string Filename;
    cout << "Nhap ten tap tin: ";
    getline(cin, Filename);
    ghiFile(Filename);
    docFile(Filename);
    cout << endl;
    system("pause");
    return 0;
}