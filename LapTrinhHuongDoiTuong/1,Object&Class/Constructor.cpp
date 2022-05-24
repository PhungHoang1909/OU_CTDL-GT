#include<iostream>

using namespace std;

class Student {
    private:
    string name;
    int age;
    public:
    Student() {
        name = "Elaina";
        age = 18;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}