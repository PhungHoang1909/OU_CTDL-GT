#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    int count = 0;
    while (i <= n) {
        if (n % i == 0) {
            count++;
        }
        i++;
    }
    cout << count;
    return 0;
}