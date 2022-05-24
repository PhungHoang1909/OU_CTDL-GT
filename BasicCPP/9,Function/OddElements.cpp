#include<iostream>

using namespace std;

int Odd(int a[100], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << Odd(a, n);
    return 0;
}