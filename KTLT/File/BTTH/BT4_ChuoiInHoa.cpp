/*
Bài 4. Viết chương trình cho phép nhập 1 chuỗi ký tự tối đa 20 ký tự (lưu trữ dưới dạng
mảng và dùng con trỏ trỏ đến). Ghi từng ký tự trong chuỗi trên 1 dòng trong file BT4.txt
sau khi đã in hoa. Mở file BT4.txt để kiểm tra.
*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    char s[21], *p;
    p = &s[0];
    cout << "Nhap chuoi: ";
    cin.getline(s, 20);
    n = strlen(s);
    ofstream oFile;
    oFile.open("BT4.txt", ios::out);
    if(oFile.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            *(p+i) = toupper(s[i]);
            oFile << *(p + i);
            if(!oFile.eof())
                cout << endl;
        }
        s[strlen(s)] = '\0';
        oFile.close();
    } else
        cout << "Ghi File khong thanh cong!" << endl;
    system("pause");
    return 0;
}