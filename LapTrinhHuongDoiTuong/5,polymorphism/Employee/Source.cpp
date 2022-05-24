#include "Employee.cpp"
#include "PartTimeEmployee.cpp"
#include "FullTimeEmployee.cpp"

int main()
{
    Employee* employee1 = new PartTimeEmployee("Hutao", 45000, 7);
    cout << "Name: " << employee1->getName() << endl;
    cout << "Salary per day: " << employee1->calculateSalary() << endl;

    Employee* employee2 = new FullTimeEmployee("Ganyu", 65000);
    cout << "Name: " << employee2->getName() << endl;
    cout << "Salary per day: " << employee2->getPaymentPerHour() << endl;
    return 0;
}