#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
    
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    
    // Overloading + operator
    Complex operator + (Complex const &obj) {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    
    cout << "First Complex Number: ";
    c1.display();
    
    cout << "Second Complex Number: ";
    c2.display();
    
    Complex c3 = c1 + c2;  // Using overloaded + operator
    cout << "Sum: ";
    c3.display();
    
    return 0;
}