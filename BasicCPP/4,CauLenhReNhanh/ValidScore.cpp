#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 0 && n <= 10) {
        cout << "The score is valid";
    } else {
        cout << "The score is not valid";
    }
    return 0;
}