/*
Câu 1: (4 điểm) Viết 01 chương trình thực hiện các yêu cầu sau:
a. Hàm chuyển toàn bộ chuỗi sang in hoa. (1.5 điểm). Lưu ý: chuỗi lưu trữ dưới dạng
mảng ký tự, không được sử dụng các hàm trong cctype.
b. Hàm ghi 1 chuỗi xuống file dưới dạng mỗi ký tự trên 1 dòng. (1.5 điểm)
c. Hàm main để kiểm chứng chương trình. (1 điểm)
*/

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

char *ChuoiHoa(char *s, int n)
{
    for (int i = 0; i < n; i++)
        if((s[i] >= 'a' && s[i] <= 'z'))
            s[i] -= 32;
    return s;
}

void ghiFile(char s[], int n)
{
    ofstream oFile;
    oFile.open("Cau1.txt", ios::out);
    if(oFile.is_open())
    {
        char s2[] = " ";
        char *ptok = strtok(s, s2);
        while (ptok != NULL)
        {
            oFile << ptok << endl;
            ptok = strtok(NULL, s2);
        }
        cout << "Ghi file thanh cong!" << endl;
        oFile.close();
    }
    else
        cout << "Ghi file khong thanh cong!" << endl;
}

int main()
{
    char s[51];
    char *p;
    p = &s[0];
    cout << "Nhap chuoi: ";
    cin.getline(s, 50);
    int n = strlen(s);
    cout << "Xuat chuoi ban dau: " << s << endl;
    cout << "Xuat chuoi in hoa: " << ChuoiHoa(s, n) << endl;
    ghiFile(s, n);
    system("pause");
    return 0;
}