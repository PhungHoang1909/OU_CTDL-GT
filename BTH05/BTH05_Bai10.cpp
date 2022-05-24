#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    int chan = 0;
    int le = 0;
    int uoc = 0;
    cout << "Nhap vao 2 so nguyen duong: ";
    cin >> n1 >> n2;
    if (n1 <= 0 || n2 <= 0) {
        cout << "Nhap sai" << endl;
    } else {
        for (int i = n1; i <= n2; i++) {
            if (i % 2 == 0) {
                chan++;
            } else {
                le++;
            }
            if (10 % i == 0) {
                uoc++;
            }
        }
        cout << "Co " << chan << " so chan" << endl;
        cout << "Co " << le << " so le" << endl;
        cout << "Co " << uoc << " so la uoc so cua 10" << endl;
    }
    system("pause");
    return 0;
}