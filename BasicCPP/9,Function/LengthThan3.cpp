#include<iostream>

using namespace std;

void show(string a[100], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i].size() >= 3) {
            cout << a[i] << " ";
        }
    }
}

int main() {
    int n;
    string a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    show(a, n);
    return 0;
}