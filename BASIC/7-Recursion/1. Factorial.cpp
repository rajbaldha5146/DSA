#include <iostream>
using namespace std;

class solution
{
public:
    int factorial(int n)
    {
        if (n == 0)
        {
            return 1;
        }

        return n * factorial(n - 1);
    }
};

int main()
{
    int n;
    cout << "Entor the number : " << endl;
    cin >> n;

    solution obj;
    cout << "Here it is factorial : " << obj.factorial(n) << endl;
}