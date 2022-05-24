#include <iostream>

using namespace std;

class Base {
    public:
    virtual void display() {
        cout << "Base";
    }
};

class Derived :public Base {
    public:
    void display() {
        cout << "Derived";
    }
};

int main() {
    Derived d;
    Base* b = &d; // up-casting
    b->display();
    return 0;
}