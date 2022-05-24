// Xoa cac nguyen am trong chuoi

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Nhap vao chuoi s: ";
    getline(cin, s);
    cout << "Xuat chuoi s sau khi xoa nguyen am:\n";
    for (int i = 0; i < s.length(); i++)
        if (s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i')
        {
            s.erase(i, 1);
            i--;
        }
    cout << s << endl;
    system("pause");
    return 0;
}