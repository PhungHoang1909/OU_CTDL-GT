#include<iostream>

using namespace std;

void show(string name) {
    cout << "Hello " << name;
}

int main() {
    string name;
    cin >> name;
    show(name);
    return 0;
}