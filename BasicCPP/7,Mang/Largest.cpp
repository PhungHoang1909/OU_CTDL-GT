#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];
    int MaxValue = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > MaxValue) {
            MaxValue = a[i];
        }
    }
    cout << MaxValue;
    return 0;
}