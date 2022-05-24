#include <iostream>

using namespace std;

class Employee {
    private:
    string name;
    int salary;
    public:
    Employee(string name, int salary) {
        this->name = name;
        this->salary = salary;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void setSalary(int salary) {
        this->salary = salary;
    }
    int getSalary() {
        return salary;
    }
    void display()
    {
        cout << "Name: " << getName() << endl;
        cout << "Salary " << getSalary() << endl;
    }
};

class Manager: Employee {
    private:
    int bonus;
    public:
    Manager(string name, int salary, int bonus) : Employee(name, salary) {
        this->bonus = bonus;
    }
    void setBonus(int bonus) {
        this->bonus = bonus;
    }
    int getBonus() {
        return bonus;
    }
    int getSalary() {
        return Employee::getSalary() + bonus;
    }
    void display() {
        cout << "Name: " << getName() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};

int main()
{
    Employee e("Hoang", 9000);
    e.display();
    Manager m("Elaina", 9000, 1000);
    m.display();
    return 0;
}