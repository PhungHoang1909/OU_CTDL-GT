#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int result = 0;
    if (a > b && a > c) {
        result = a;
    } if ( b > a && b > c) {
        result = b;
    } else {
        result = c;
    }
    cout << result;
    return 0;
}