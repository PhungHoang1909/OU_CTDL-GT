/*
4. Viết chương trình xây dựng các hàm cho phép:
- Nhập vào 2 chuỗi, mỗi chuỗi lưu ở 1 file khác nhau.
- Đọc 2 chuỗi từ 2 file, tiến hành so sánh, nối 2 chuỗi lại và xuất kết quả.
- Đọc 1 chuỗi từ 1 file bất kỳ, đếm xem chuỗi có bao nhiêu nguyên âm.
- Hàm main kiểm chứng với các hàm ở cả 2 chuỗi.
*/

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
    if (outFile.is_open())
    {
        outFile << data;
        cout << "Ghi File thanh cong!";
        outFile.close();
    }
    else
        cout << "\nGhi File khong thanh cong!" << endl;
}

void docoFile(string Filename)
{
    ifstream inFile;
    string data;
    inFile.open(Filename, ios::in);
    if(inFile.is_open())
    {
        cout << "\nDoc File thanh cong!" << endl;
        getline(inFile, data);
        cout << data;
        inFile.close();
    }
    else
        cout << "\nDoc File khong thanh cong!" << endl;
}

void Doc2(string f1, string f2, string &strkq)
{
    ifstream inFile;
    string data1, data2;
    inFile.open(f1, ios::in);
    if(inFile.is_open())
    {
        cout << "\nDoc File thanh cong!" << endl;
        getline(inFile, data1);
        cout << data1;
        inFile.close();
    }
    else
        cout << "\nDoc File khong thanh cong!" << endl;
    inFile.open(f2, ios::in);
    if(inFile.is_open())
    {
        cout << "\nDoc File thanh cong!" << endl;
        getline(inFile, data2);
        cout << data2;
        inFile.close();
    }
    else
        cout << "\nDoc File khong thanh cong!" << endl;
    
    if (data1 == data2)
        cout << "\nChuoi 1 bang chuoi 2";
    else
        if (data1 > data2)
            cout << "\nChuoi 1 > chuoi 2";
        else
            cout << "\nChuoi 1 < chuoi 2";
    strkq = data1 + data2;
}

int DemNA(string Filename)
{
    int kq = 0;
    string data;
    ifstream File(Filename, ios::in);
    if(File.is_open())
    {
        getline(File, data);
        File.close();
    }
    for (int i = 0; i < data.length(); i++)
        if (data.at(i) == 'u' || data.at(i) == 'e' || data.at(i) == 'o' || data.at(i) == 'a' || data.at(i) == 'i')
            kq++;
    return kq;
}

int main()
{
    string Filename1, Filename2, kqnoi;
    cout << "Nhap ten tap tin 1: ";
    getline(cin, Filename1);
    ghiFile(Filename1);
    docoFile(Filename1);
    cout << "Nhap ten tap tin 2: ";
    getline(cin, Filename2);
    ghiFile(Filename2);
    docoFile(Filename2);
    Doc2(Filename1, Filename2, kqnoi);
    cout << endl;
    cout << "\nKet qua noi chuoi: ";
    cout << kqnoi;
    cout << "\nSo nguyen am chuoi 1: " << DemNA(Filename1);
    cout << endl;
    system("pause");
    return 0;
}