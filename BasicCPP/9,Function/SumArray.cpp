#include<iostream>

using namespace std;

int SumArray(int n, int a[100]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << SumArray(n, a);
    return 0;
}