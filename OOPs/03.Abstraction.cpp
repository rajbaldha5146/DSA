#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function → makes this class abstract
    virtual void draw() = 0;

    // Common function (can have implementation)
    void areaFormula() {
        cout << "Area formula depends on the type of shape.\n";
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle\n";
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle\n";
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw();       // Output: Drawing a Circle
    s2->draw();       // Output: Drawing a Rectangle

    s1->areaFormula();
    s2->areaFormula();

    delete s1;
    delete s2;

    return 0;
}
