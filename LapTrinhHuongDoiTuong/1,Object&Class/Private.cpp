#include <iostream>

using namespace std;

class Student {
    public:
    string name;
    private:
    void display() {
        cout << "Name: " << name;
    }
};

int main() {
    Student s;
    s.name = "Elaina";
    s.display();
    return 0;
}