#include<iostream>

using namespace std;

int main() {
    int n, k;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            count ++;
        }
    }
    cout << count;
    return 0;
}