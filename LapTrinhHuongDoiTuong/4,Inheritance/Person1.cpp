#include <iostream>

using namespace std;

class Person {
    private:
    string name;
    int dob;
    public:
    Person(string name, int dob)
    {
        this->name = name;
        this->dob = dob;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void setDob(int dob) {
        this->dob = dob;
    }
    int getDob() {
        return dob;
    }
};

class Student : public Person
{
    private:
    double gpa;
    public:
    Student(string name, int dob, double gpa) : Person(name, dob) {
        this->gpa = gpa;
    }
    void setGpa(double gpa) {
        this->gpa = gpa;
    }
    double getGpa() {
        return gpa;
    }
};

int main() {
    Student s("Elaina", 2003, 9.9);
    cout << "Name: " << s.getName() << endl;
    cout << "Date of birth: " << s.getDob() << endl;
    cout << "Gpa: " << s.getGpa() << endl;
    return 0;
}