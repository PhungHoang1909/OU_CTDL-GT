#include <iostream>

using namespace std;

class Person {
    private:
    string name;
    string gender;

    public:
    Person(string name, string gender) {
        this->name = name;
        this->gender = gender;
    }

    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void setGender(string gender) {
        this->gender = gender;
    }
    string getGender() {
        return gender;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
    }
};

class Student : Person {
    private:
    int salary;
    
    public:
    Student(string name, string gender, int salary) : Person(name, gender) {
        this->salary = salary;
    }
    void setSalary(int salary) {
        this->salary = salary;
    }
    int getSalary() {
        return salary;
    }
    void display() {
        Person::display();
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student s("Elaina", "Female", 9000);
    s.display();
    return 0;
}