#include "Student.cpp"
#include "Person.cpp"
#include "Teacher.cpp"

int main() {
    Student s("Hoang", 18, "Teyvat", 9.0);
    s.display();
    Teacher t("Elaina", 18, "Celestia", 9000);
    t.display();
    return 0;
}