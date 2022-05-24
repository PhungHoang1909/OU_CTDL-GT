#include<iostream>

using namespace std;

class Rectangle {
    public:
    float length, width;

    void getInformation() {
        cin >> length >> width;
    }

    void display() {
        cout << "Area: " << length * width << endl;
        cout << "Perimeter: " << (length + width) * 2;
    }
};

int main() {
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}