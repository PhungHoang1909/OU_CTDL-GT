#include<iostream>

using namespace std;

bool lasonguyento(int n) 
{
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < (n-1); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so can kiem tra: ";
    cin >> n;
    if (lasonguyento(n)) {
        cout << n << " la so nguyen to";
    } else {
        cout << n << " Khong la so nguyen to";
    }
    return 0;
}