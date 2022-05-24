/*
8. Chuỗi số Fibonacci bắt đầu từ 0 và 1, số kế tiếp là tổng của hai số trước đó.
0, 1, 1, 2, 3, 5, 8, 13, 21, …
Viết hàm tính số Fibonacci thứ n và chương trình kiểm tra hàm đã viết
*/

#include <iostream>

using namespace std;

int fibonacci(int n)
{
    int u = 0, v = 1, t, i = 3;
    while (i <= n)
    {
        t = u + v;
        u = v;
        v = t;
        i++;
    }
    return t;
}

int main()
{
    int n;
    cout << "Nhap so: ";
    cin >> n;
    cout << "\nDay Fibonacci den " << n;
    cout << "\n 0, 1";
    for (int i = 3; i <= n; i++) 
    {
        cout << ", " << fibonacci(i);
    }
    cout << "\n So Fibonacci thu " << n << " la: " << fibonacci(n);
    cout << endl;
    system("pause");
    return 0;
}

// Ham de quy

/*
int fic(int n)
{
    if (n == 1 || n == 2) 
    {
        return 1;
    }
    return fic(n-1) + fic(n-2);
}
*/