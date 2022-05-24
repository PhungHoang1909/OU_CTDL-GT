#include<iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 1;
    while (b > 0) {
        ans = ans * a;
        b--;
    }
    cout << ans;
    return 0;
}