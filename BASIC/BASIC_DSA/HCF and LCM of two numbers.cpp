#include <iostream>
using namespace std;
// Function to find GCD using Euclidean Algorithm
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Function to find LCM using formula
int findLCM(int a, int b)
{
    return (a * b) / findGCD(a, b);
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int gcd = findGCD(num1, num2);
    int lcm = findLCM(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << endl;
    return 0;
}