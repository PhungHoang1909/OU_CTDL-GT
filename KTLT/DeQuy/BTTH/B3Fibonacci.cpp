/*
Viết hàm đệ qui tính giá trị Fibonacci của một số nguyên không âm. Sau đó xây
dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
*/

#include <iostream>

using namespace std;

int fibonacchi(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacchi(n - 1) + fibonacchi(n - 2);
}

int main()
{
    int n;
    do
    {
        cout << "Nhap vao 1 so nguyen khong am: ";
        cin >> n;
        if (n < 0)
            cout << "Nhap sai. Nhap lai !\n";
    } while (n < 0);  
    cout << "So fibonacchi cua " << n << " = " << fibonacchi(n) << endl;
    cout << "Xuat day so Fibonacchi:\n";
    for (int i = 0; i <= n; i++)
        cout << fibonacchi(i) << " ";
    return 0;  
}