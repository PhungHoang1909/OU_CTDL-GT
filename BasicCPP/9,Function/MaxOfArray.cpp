#include<iostream>

using namespace std;

int MaxOfArray(int a[100], int n) {
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int n1, n2;
    int a1[100], a2[100];
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cin >> a1[i];
    }
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cin >> a2[i];
    }
    cout << MaxOfArray(a1, n1) << " " << MaxOfArray(a2, n2);
    return 0;
}