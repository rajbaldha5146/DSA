#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;
    int age;

public:
    // Default constructor
    Student()
    {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor (revised/overloaded)
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    // Using default constructor
    Student s1;
    s1.display();

    // Using revised/parameterized constructor
    Student s2("Raj", 21);
    s2.display();

    return 0;
}
