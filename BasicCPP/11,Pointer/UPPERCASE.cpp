#include<iostream>

using namespace std;

void upper(string *s) {
    for (int i = 0; i < (*s).size(); i++) {
        if ((*s)[i] >= 'a' && (*s)[i] <= 'z') {
            (*s)[i] -= 32;
        }
    }
}

int main() {
    string s;
    cin >> s;
    upper(&s);
    cout << s;
    return 0;
}