#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding parent's sound() function
    void sound() {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    // Overriding parent's sound() function
    void sound() {
        cout << "Cat meows: Meow Meow!" << endl;
    }
};

int main() {
    Animal a;
    Dog d;
    Cat c;
    
    a.sound();  // Parent version
    d.sound();  // Overridden version
    c.sound();  // Overridden version
    
    return 0;
}