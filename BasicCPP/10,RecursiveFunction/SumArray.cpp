#include<iostream>

using namespace std;

int SumOfArray(int a[100], int n) {
    if (n == 1) return a[0];
    return a[n-1] + SumOfArray(a, n - 1);
}

int main() {
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << SumOfArray(a, n);
    return 0;
}