#include<iostream>

using namespace std;

class Circle {
    private:
    double radius;
    public:
    Circle(double radius) {
        this->radius = radius;
    }
    double getArea() {
        return 3.14 * radius * radius;
    }
    double getCircumference() {
        return 3.14 * 2 * radius;
    }
};

int main() {
    Circle c(7);
    cout << c.getArea() << endl;
    cout << c.getCircumference() << endl;
    return 0;
}