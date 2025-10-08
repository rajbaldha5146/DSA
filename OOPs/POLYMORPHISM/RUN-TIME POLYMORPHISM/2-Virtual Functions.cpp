// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void sound() {  // Non-virtual
//         cout << "Animal sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() {
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Animal *ptr;      // Parent pointer
//     Dog d;
//     ptr = &d;         // Points to Dog object
    
//     ptr->sound();     // ❌ Calls Animal's sound (Wrong!)
    
//     return 0;
// }


#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {  // 🔑 Virtual keyword
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // override keyword (C++11)
        cout << "Dog barks: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow!" << endl;
    }
};

class Cow : public Animal {
public:
    void sound() override {
        cout << "Cow moos: Moo!" << endl;
    }
};

int main() {
    Animal *ptr;  // Parent pointer
    
    Dog d;
    Cat c;
    Cow cow;
    
    ptr = &d;
    ptr->sound();  // ✅ Calls Dog's sound
    
    ptr = &c;
    ptr->sound();  // ✅ Calls Cat's sound
    
    ptr = &cow;
    ptr->sound();  // ✅ Calls Cow's sound
    
    return 0;
}