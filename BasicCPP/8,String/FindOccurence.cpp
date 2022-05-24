#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int ans = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}