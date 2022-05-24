#include <iostream>

using namespace std;

int main()
{
    int m, n;
    int tong = 0;
    cout << "Ban can nhap bao nhieu so: ";
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cout << "Nhap so thu: " << i << ": ";
        cin >> n;
        tong += n;
    }
    cout << "Tong " << m << " chu so vua nhap la: " << tong << endl;
    system("pause");
    return 0;
}