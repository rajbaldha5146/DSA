#include <iostream>
using namespace std;

class Solution
{
public:
    int countWays(int n)
    {

        if (n < 0)
        {
            return 0;
        }
        if (n == 0)
        {
            return 1;
        }

        return countWays(n - 1) + countWays(n - 2);
    }
};

int main()
{
    int n;
    cout << "Enter number of steps: ";
    cin >> n;

    Solution obj;
    cout << "Number of ways to reach step " << n << " = " << obj.countWays(n) << endl;

    return 0;
}