#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    bool checkArmstrong(int n)
    {
        int digit = 0;
        int temp = n;

        // Count digits
        while (temp != 0)
        {
            temp = temp / 10;
            digit++;
        }

        // Reset temp to original n
        temp = n;
        int ans = 0;

        // Calculate sum of digits^digit
        while (temp != 0)
        {
            int a = temp % 10;
            ans += (int)round(pow(a, digit));
            temp = temp / 10;
        }

        // Compare with original number
        return (ans == n);
    }
};

int main()
{
    int number;
    cout << "Enter The Number :" << endl;
    cin >> number;

    Solution obj;
    bool ans = obj.checkArmstrong(number);

    if (ans)
    {
        cout << "Number is Armstrong";
    }
    else
    {
        cout << "Number is Not Armstrong";
    }

    return 0;
}
