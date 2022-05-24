#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    // cau a
    int n;
    double s1 = 0;
    double s2 = 0;
    double s3 = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (double i = 1.0; i <= n; i++) {
        s1 = s1 + i * i;
        s2 = s2 + (1.0 / i);
        s3 = s3 + 1.0 / ((2 * i) - 1);
    }
    cout << "S1 = " << s1 << endl;
    cout << "S2 = " << s2 << endl;
    cout << "S3 = " << s3 << endl;
    system("pause");
    return 0;
}