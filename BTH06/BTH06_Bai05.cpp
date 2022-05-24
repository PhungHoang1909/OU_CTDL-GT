/* Viết hàm nhận vào số đo cạnh, xuất ra hình vuông gồm các dấu * và chương trình để
kiểm tra hàm */

#include <iostream>

using namespace std;

void vehv(int n)
{
    int j;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) {
            cout << " * ";
        }
        cout << endl;
    }
}

int main()
{
    int canh;
    cout << "Nhap vao canh hinh vuong: ";
    cin >> canh;
    vehv(canh);
    system("pause");
    return 0;
}