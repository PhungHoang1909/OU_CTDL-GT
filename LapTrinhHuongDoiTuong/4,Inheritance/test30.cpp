#include <iostream>

using namespace std;

class Person {
    private:
    string name;

    public:
    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }
};

class Student : private Person {
};

int main()
{
    Student s;
    s.setName("Elaina");
    cout << s.getName();
    return 0;
}

// Ket qua: Loi bien dich