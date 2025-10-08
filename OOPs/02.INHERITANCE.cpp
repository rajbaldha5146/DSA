#include <iostream>
using namespace std;

// PARENT CLASS (Base Class)
class Animal {
public:
    string name;
    int age;
    
    void eat() {
        cout << name << " is eating..." << endl;
    }
    
    void sleep() {
        cout << name << " is sleeping..." << endl;
    }
};

// CHILD CLASS (Derived Class)
class Dog : public Animal {  // Dog inherits from Animal
public:
    string breed;
    
    void bark() {  // Dog's own method
        cout << name << " says: Woof! Woof!" << endl;
    }
};

// Another CHILD CLASS
class Cat : public Animal {  // Cat inherits from Animal
public:
    string furColor;
    
    void meow() {  // Cat's own method
        cout << name << " says: Meow! Meow!" << endl;
    }
};

int main() {
    Dog d1;
    d1.name = "Buddy";  // Inherited from Animal
    d1.age = 3;         // Inherited from Animal
    d1.breed = "Golden Retriever";  // Dog's own property
    
    d1.eat();    // Inherited method
    d1.sleep();  // Inherited method
    d1.bark();   // Dog's own method
    
    cout << "\n";
    
    Cat c1;
    c1.name = "Whiskers";
    c1.age = 2;
    c1.furColor = "White";
    
    c1.eat();    // Inherited method
    c1.sleep();  // Inherited method
    c1.meow();   // Cat's own method
    
    return 0;
}