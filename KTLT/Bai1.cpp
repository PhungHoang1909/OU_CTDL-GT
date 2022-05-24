#include <iostream>
#include <cstring>

using namespace std;

double tong(int n)
{
    if (n == 1)
        return 1;
    if(n>0)
        return tong(n-1) + 1.0/n;
}

int demHoa(char* s , int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
            dem++;
    }
    return dem;
}

int main()
{
    float n;
    cout << "Nhap so nguyen: ";
    cin >> n;
    cout << "Tong: " << tong(n) << endl;
    char s[51], *p;
    cout << "Nhap chuoi ky tu: ";
    cin.ignore();
    cin.getline(s, 50);
    int d = strlen(s);
    p = s;
    cout << "Chuoi co " << demHoa(p, d) << " ki tu in hoa " << endl;
    return 0;
}