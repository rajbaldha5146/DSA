#include <iostream>
using namespace std;

class solution
{

public:
    void chackOddEven(int n)
    {

        if (n % 2 == 0)
        {

            cout << "Number is Even " << endl;
        }
        else
        {

            cout << "Number is Odd " << endl;
        }
    }
};

int main()
{
    int number;

    cout << "Enter The NUmber : " << endl;
    cin >> number;

    solution obj;
    obj.chackOddEven(number);
}