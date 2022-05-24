#include<iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Nhap vao 2 so nguyen: ";
    cin >> n1 >> n2;
    int dem = 0;
    for (int i = n1; i <= n2; i++)
    {
        if (n2 % i == 0) {
            dem++;
        }
    }
    cout << "Tu " << n1 << " den " << n2 << " co " << dem << " so nguyen to. " << endl;
    system("pause");
    return 0;
}
