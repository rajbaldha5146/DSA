#include <iostream>
using namespace std;

class solution
{
public:
    bool IsPalindrome(int n)
    {
        int original = n;
        int ans = 0;

        while (n != 0)
        {
            int digit = n % 10;
            ans = ans * 10 + digit;
            n = n / 10;
        }

        cout << original << endl
             << "and" << ans << endl;

        if (original == ans)
            return true;
        else
            return false;
    }
};

int main()
{
    int number;

    cout << "enter the number" << endl;
    cin >> number;

    solution obj;
    bool ans = obj.IsPalindrome(number);

    if (ans)
    {
        cout << "number is palindrom";
    }
    else
    {
        cout << "number is not palindrome";
    }
}