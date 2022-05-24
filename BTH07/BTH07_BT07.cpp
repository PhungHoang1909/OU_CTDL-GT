/*
7. Viết các hàm sau đây:
a. Hàm kiểm tra một ký tự có phải là ký tự in hoa hay không?
b. Hàm kiểm tra một ký tự có phải là ký tự in thường hay không?
c. Chương trình nhận vào một chuỗi (string), xuất kết quả chuỗi vừa nhập có bao
nhiêu ký tự in hoa? bao nhiêu ký tự in thường? Lưu ý: sử dụng 2 hàm đã xây
dựng ở trên.
*/

#include <iostream> 
#include <string>

using namespace std;

bool ktinhoa(char c1)
{
    if (c1 >= 'A' && c1 <= 'Z') {
        return true;
    } else {
        return false;
    }
}

bool ktinthuong(char c2)
{
    if (c2 >= 'a' && c2 <= 'z') {
        return true;
    } else {
        return false;
    }
}

int main()
{
    string s;
    int hoa = 0;
    int thuong = 0;
    cout << "Nhap chuoi ky tu: ";
    getline(cin, s);
    for (int i = 0; i <= s.size(); i++) 
    {
        if (ktinhoa(s[i]) == true) {
            hoa++;
        }
        if (ktinthuong(s[i]) == true) {
            thuong++;
        }
    }
    cout << "So ky tu in hoa: " << hoa << endl;
    cout << "So ky tu in thuong: " << thuong << endl;
    system("pause");
    return 0;
}