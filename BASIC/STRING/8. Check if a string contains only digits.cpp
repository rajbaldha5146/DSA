#include <iostream>
using namespace std;
// Function to check if a string contains only digits
bool isAllDigits(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return false; // Found a non-digit character
        }
    }
    return true; // All characters were digits
}
int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    if (isAllDigits(input))
    {
        cout << "Yes, the string contains only digits." << endl;
    }
    else
    {
        cout << "No, the string contains non-digit characters." << endl;
    }
    return 0;
}