/*
Bài 4. Xây dựng hàm nhận vào 1 chuỗi ký tự (không khoảng trắng), kiểm tra xem chuỗi đó có
phải là chuỗi palindrome hay không? Viết chương trình kiểm chứng hàm vừa xây dựng.
Ví dụ: chuỗi “Anna”, “hih” là chuỗi palindrome.
*/

#include <iostream>
#include <cstring>

using namespace std;

bool ChuoiDX(char *s, int n)
{
    for (int i = 0; i < n/2; i++)
    {
        if (s[i] == s[n - i - 1])
            return true;
        else
            return false;
    }
    // return false;
}

int main()
{
    char s[51];
    cout << "Nhap chuoi khong khoang trang: ";
    cin.getline(s, 50);
    int n = strlen(s);
    if (ChuoiDX(s, n))
        cout << "Chuoi doi xung" << endl;
    else
        cout << "Chuoi khong doi xung" << endl;
    system("pause");
    return 0;
}