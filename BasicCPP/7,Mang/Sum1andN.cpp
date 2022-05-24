#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        sum = a[0] + a[n - 1];
    }
    cout << sum;
    return 0;
}