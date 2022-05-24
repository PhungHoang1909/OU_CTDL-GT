#include <iostream>

using namespace std;

class Person {
    private:
    int id;
    string name;
    int age;
    string address;
    public:
    Person(int id, string name, int age, string address) {
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
    }
    int getId(){
        return id;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getAddress() {
        return address;
    }
};

int main()
{
    Person q(1001, "Quynh", 24, "Ha Noi");
    cout << "Id: " << q.getId() << endl;
    cout << "Name: " << q.getName() << endl;
    cout << "Age: " << q.getAge() << endl;
    cout << "Address: " << q.getAddress() << endl;
    return 0;
}