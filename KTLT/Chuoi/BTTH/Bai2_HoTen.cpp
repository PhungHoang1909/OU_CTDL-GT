/*
Bài 2. Viết chương trình nhận vào 1 chuỗi ký tự bao gồm “ho, ten”. Sau đó tiến hành tách
họ và tên của chuỗi này ra, kết hợp chúng lại thành “ho ten” và xuất lại kết quả.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[51];
    cout << "Nhap vao ho ten: ";
    cin.getline(s, 50);
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        if (s[i] == ' ')
            cout << endl;
        else 
            cout << s[i];
    cout << endl;
    cout << s << endl;
    cout << endl;
    system("pause");
    return 0;
}