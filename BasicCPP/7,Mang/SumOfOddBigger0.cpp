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
        if (a[i] > 0 && a[i] % 2 != 0) {
            sum += a[i];
        }
    }
    cout << sum;
    return 0;
}