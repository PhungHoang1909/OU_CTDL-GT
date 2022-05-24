#include "Person.cpp"
#include "Employee.cpp"
#include "Customer.cpp"

int main()
{
    Person *person1 = new Employee("Hoang", "PY", 9000);
    Person *person2 = new Customer("Elaina", "UK", 10400);
    person1->display();
    person2->display();
    return 0;
}