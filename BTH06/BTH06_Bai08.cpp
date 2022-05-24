/*
8. Viết các hàm sau đây và chương trình để kiểm tra các hàm đã viết:
a. Hàm tính chu vi hình vuông.
b. Hàm tính diện tích vuông.
c. Hàm xuất hình vuông rỗng khi nhận vào số đo cạnh và ký tự cần xuất.
*/

#include <iostream>

using namespace std;

// câu a:
int chuvihv(int n)
{
    int chuvi = 4 * n;
    return chuvi;
}

// câu b:
int dientichhv(int n)
{
    int dientich = n * n;
    return dientich;
}

// câu c:
void vuongrong(int n, char kt)
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || j == 1 || i == n || j == n) {
                cout << kt;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    char kt;
    cout << "Nhap vao canh cua hinh vuong: ";
    cin >> n;
    cout << "Chu vi hinh vuong la: " << chuvihv(n) << endl;
    cout << "Dien tich hinh vuong la: " << dientichhv(n) << endl;
    cout << "Nhap ky tu in hv rong: ";
    cin >> kt;
    cout << "Hinh vuong rong: " << endl;
    vuongrong(n, kt);
    system("pause");
    return 0;
}