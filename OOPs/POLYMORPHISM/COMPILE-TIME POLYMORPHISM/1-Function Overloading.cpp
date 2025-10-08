#include <iostream>
using namespace std;

class Calculator {
public:
    // Same function name - different parameters
    
    // Add 2 integers
    int add(int a, int b) {
        cout << "Adding 2 integers: ";
        return a + b;
    }
    
    // Add 3 integers
    int add(int a, int b, int c) {
        cout << "Adding 3 integers: ";
        return a + b + c;
    }
    
    // Add 2 doubles
    double add(double a, double b) {
        cout << "Adding 2 doubles: ";
        return a + b;
    }
    
    // Add 2 strings
    string add(string a, string b) {
        cout << "Concatenating strings: ";
        return a + b;
    }
};

int main() {
    Calculator calc;
    
    cout << calc.add(5, 10) << endl;
    cout << calc.add(5, 10, 15) << endl;
    cout << calc.add(5.5, 10.5) << endl;
    cout << calc.add("Hello ", "World") << endl;
    
    return 0;
}