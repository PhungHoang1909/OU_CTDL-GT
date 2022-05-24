#include "Employee.cpp"
#include "Manager.cpp"

int main()
{
    Employee e("Hoang", 9000);
    e.display();
    Manager m("Elaina", 10000, 9000);
    m.display();
    return 0;
}