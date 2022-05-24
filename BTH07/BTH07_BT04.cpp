/*
4. Viết các hàm sau đây:
a. Hàm kiểm tra một ký tự có phải là ký tự số hay không?
b. Hàm kiểm tra một ký tự có phải là ký tự chữ cái hay không?
c. Chương trình nhận vào một chuỗi (string), xuất kết quả chuỗi vừa nhập có bao
nhiêu ký tự số? bao nhiêu ký tự chữ? Lưu ý: sử dụng 2 hàm đã xây dựng ở trên.
*/

#include <iostream>
#include <string>

using namespace std;

bool kytuso(char c1)
{
    if (c1 >= '0' && c1 <= '9') {
        return true;
    } else {
        return false;
    }
}

bool kytuchu(char c2)
{
    if (c2 >= 'a' && c2 <= 'z' || c2 >= 'A' && c2 <= 'Z') {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int demso = 0;
    int demchu = 0;
    string chuoi;
    cout << "Nhap vao chuoi ky tu: ";
    getline(cin, chuoi);
    for (int i = 0; i <= chuoi.size(); i++)
    {
        if (kytuso(chuoi[i]) == true) {
            demso++;
        }
        if (kytuchu(chuoi[i]) == true) {
            demchu++;
        }
    }
    cout << "So ky tu so: " << demso << endl;
    cout << "So ky tu chu: " << demchu << endl;
    system("pause");
    return 0;
}