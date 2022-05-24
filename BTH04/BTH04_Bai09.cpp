#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    int dem = 0;
    cout << "Nhap 2 so nguyen duong n1 n2: ";
    cin >> n1 >> n2;
    int i = n1;
    while (i <= n2 ) {
            if (10 % i == 0) {
                dem++;
            }
            i++;
        }
    cout << "So uoc cua 10 tu " << n1 << " den " << n2 << " la: " << dem << endl;
    system("pause");
    return 0;
}