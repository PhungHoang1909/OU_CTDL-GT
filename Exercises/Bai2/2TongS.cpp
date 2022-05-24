#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n;
    cout << "Nhap vao so nguyen: ";
    cin >> n;
    double s = 0;
    for (double i = 1.0; i <= n; i++)
    {
        s += (i/((i+1)+(i+2)));
    }
    cout << "S = " << setprecision(2) << fixed << s << endl;
    system("pause");
    return 0; 
}