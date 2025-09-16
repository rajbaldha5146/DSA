#include <iostream>
using namespace std;

class solution
{
public:
    int fibonacci(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
        else
        {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
};

int main()
{
    int number;

    cout << "enter the number" << endl;
    cin >> number;

    solution obj;

    cout << "Fibonacci Series up to " << number << " terms: ";
    for (int i = 0; i <= number; i++)
    {
        cout << obj.fibonacci(i) << " ";
    }
}