/*
Bài 3. Viết chương trình xây dựng các hàm:
a. Hàm nhận vào 1 chuỗi ký tự. Trả về kết quả là chuỗi đó sau khi loại bỏ hết khoảng trắng
đầu và cuối chuỗi.
b. Hàm đếm số khoảng trắng của 1 chuỗi.
c. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự chữ số hoặc chữ cái.
d. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự in hoa.
e. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự in thường.
f. Hàm chuyển toàn bộ chuỗi sang in hoa.
g. Hàm chuyển toàn bộ chuỗi sang in thường.
h. Hàm chuyển chuỗi sang dạng in hoa ký tự đầu tiên mỗi từ.
i. Hàm đếm xem 1 chuỗi có bao nhiêu từ.
j. Hàm main kiểm chứng các hàm trên.
*/

#include <iostream>
#include <cstring>

using namespace std;

// a. Hàm nhận vào 1 chuỗi ký tự. Trả về kết quả là chuỗi đó sau khi loại bỏ hết khoảng trắng
// đầu và cuối chuỗi.
char *XoaSP(char *s, int &n)
{
    int i = 0;
    while(isspace(*(s+i)))
        i++;
    n = n - i;
    strncpy(s, s+i, n);
    s[n] = '\0';
    i = 0;
    return s;
}

// b. Hàm đếm số khoảng trắng của 1 chuỗi.
int DemSP(char *s, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (isspace(s[i]))
            count++;
    return count;
}

// c. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự chữ số hoặc chữ cái.
int DemKT(char *s, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (isalnum(s[i]))
            count++;
    return count;
}

// d. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự in hoa.
int DemHoa(char *s, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (isupper(s[i]))
            count++;
    return count;
}

// e. Hàm đếm xem 1 chuỗi có bao nhiêu ký tự in thường.
int DemThuong(char *s, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (islower(s[i]))
            count++;
    return count;
}

// f. Hàm chuyển toàn bộ chuỗi sang in hoa.
char *ChuoiHoa(char *s, int n)
{
    for (int i = 0; i < n; i++)
        if(islower(s[i]))
            s[i] -= 32;
    return s;
}

// g. Hàm chuyển toàn bộ chuỗi sang in thường.
char *ChuoiThuong(char *s, int n)
{
    for (int i = 0; i < n; i++)
        if(isupper(s[i]))
            s[i] += 32;
    return s;
}

// h. Hàm chuyển chuỗi sang dạng in hoa ký tự đầu tiên mỗi từ.
char *ChuoiHoaDauKT(char *s, int n)
{
    if(islower(s[0]))
        s[0] -= 32;
    for (int i = 0; i < n - 1; i++)
    {
        if(isspace(s[i]) && islower(s[i+1]))
            s[i+1] -= 32;
        else
        {
            if(isspace(s[i]) && isupper(s[i+1]))
                s[i+1] += 32;
        }
    }
    return s;
}

// i. Hàm đếm xem 1 chuỗi có bao nhiêu từ.
int DemTu(char *s, int n)
{
    int count = 0;
    char s1[] = " ";
    char *ptok = strtok(s, s1);
    while(ptok != NULL)
    {
        ptok = strtok(NULL, s1);
        count++;
    }
    return count;
}

int main()
{
    char s[51];
    int n;
    cout << "Nhap chuoi: ";
    cin.getline(s, 50);
    n = strlen(s);
    cout << "Xuat chuoi xoa khoang trang:\n";
    XoaSP(s, n);
    cout << s;
    cout << endl;
    cout << "Chuoi co " << DemSP(s, n) << " khoang trang" << endl;
    cout << "Chuoi co " << DemKT(s, n) << " ki tu" << endl;
    cout << "Chuoi co " << DemHoa(s, n) << " ki tu in hoa" << endl;
    cout << "Chuoi co " << DemThuong(s, n) << " ki tu in thuong" << endl;
    cout << "Xuat chuoi in hoa:\n";
    ChuoiHoa(s, n);
    cout << s;
    cout << endl;
    cout << "Xuat chuoi in thuong:\n";
    ChuoiThuong(s, n);
    cout << s;
    cout << endl;
    cout << "Xuat chuoi in hoa dau tien moi tu:\n";
    ChuoiHoaDauKT(s, n);
    cout << s;
    cout << endl;
    cout << "Chuoi co " << DemTu(s, n) << " tu" << endl;
    system("pause");
    return 0;
}