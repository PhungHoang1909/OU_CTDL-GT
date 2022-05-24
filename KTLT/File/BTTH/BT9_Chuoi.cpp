/*
Bài 9. Viết chương trình gồm các hàm:
- Nhập vào 1 chuỗi.
- Ghi 1 chuỗi vào file.
- Đọc 1 chuỗi từ file.
- So sánh 2 chuỗi.Bài tập thực hành Kỹ thuật lập trình
- Nối 2 chuỗi.
- Đếm 1 chuỗi xem có bao nhiêu nguyên âm.
- Đếm 1 chuỗi đang lưu trong file có bao nhiêu từ.
- Hàm main kiểm chứng.
*/


#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

void NhapS(string &s)
{
    cout << "Nhap chuoi s: ";
    getline(cin, s);
}

void GhiStr(string &File, string s)
{
    ofstream oFile;
    oFile.open(File, ios::out);
    if(oFile.is_open())
    {
        oFile << s << endl;
        oFile.close();
        cout << "Ghi file thanh cong" << endl;
    } else
        cout << "Ghi file khong thanh cong" << endl;
}

void DocStr(string File, string &s)
{
    ifstream iFile;
    iFile.open(File, ios::in);
    if(iFile.is_open())
    {
        getline(iFile, s);
        iFile.close();
        cout << "Doc File thanh cong" << endl;
    }
    else
        cout << "Doc File khong thanh cong" << endl;
}

bool CmpStr(string File1, string File2)
{
    bool kq;
    string s1, s2;
    DocStr(File1, s1);
    DocStr(File2, s2);
    if(s1 == s2)
        kq = true;
    else
        kq = false;
    return kq;
}

void AppStr(string File1, string File2, string &s)
{
    ifstream F1, F2;
    string s1, s2;
    DocStr(File1, s1);
    DocStr(File2, s2);
    s = s1 + ' ' + s2;
}

int DemNA(string File)
{
    string s;
    int dem = 0;
    DocStr(File, s);
    for (int i = 0; i < s.length(); i++)
        if (s.at(i) == 'u' || s.at(i) == 'e' || s.at(i) == 'o' || s.at(i) == 'a' || s.at(i) == 'i')
            dem++;
    return dem;
}

int DemTu(string File)
{
    string s;
    char sc[50], ss[] = " ";
    int dem = 0;
    DocStr(File, s);
    strcpy(sc, s.c_str());
    char *ptok = strtok(sc, ss);
    while(ptok != NULL)
    {
        dem++;
        ptok = strtok(NULL, ss);
    }
    return dem;
}

int main()
{
    string s, sf1, sf2, sApp, F1, F2;
    cout << "Nhap ten file 1: ";
    cin >> F1;
    cin.ignore();
    NhapS(s);
    GhiStr(F1, s);
    cout << "\nNhap ten file 2: ";
    cin >> F2;
    cin.ignore();
    NhapS(s);
    GhiStr(F2, s);
    DocStr(F1, sf1);
    cout << "\nNoi dung file 1: " << sf1;
    DocStr(F2, sf2);
    cout << "\nNoi dung file 2: " << sf2;
    if(CmpStr(F1, F2))
        cout << "\nHai file bang nhau";
    else
        cout << "\nHai file khong bang nhau";
    AppStr(F1, F2, sApp);
    cout << "\nKet qua noi file 1 va file 2: " << sApp;
    cout << "\nDem NA trong file 1: " << DemNA(F1);
    cout << "\nDem NA trong file 2: " << DemNA(F2);
    cout << "\nDem tu trong file 1: " << DemTu(F1);
    cout << "\nDem tu trong file 2: " << DemTu(F2) << endl;
    system("pause");
    return 0;
}