#include <iostream>
using namespace std;

class solution
{
public:
    int factorial(int n)
    {
        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans = ans * i;
        }

        return ans;
    }
};

class bestSolution
{
public:
    int factorial(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        else
        {
            return n * factorial(n-1);
        }
    }
};

int main()
{
    int number;

    cout << "Enter The Number :" << endl;
    cin >> number;

    // solution obj;
    // int ans = obj.factorial(number);
    // cout << "Answer Of " << number << "Factoril is : " << ans;

    bestSolution obj;
    int ans = obj.factorial(number);
    cout << "Answer Of " << number << "Factoril is : " << ans;
}