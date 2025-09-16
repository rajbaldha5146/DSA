#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class solution
{
public:
    bool palindrome(string &s)
    {
        int start = 0;
        int end = s.length() - 1;
        bool ispalindrome = false;

        while (start < end)
        {
            if (s[start] == s[end])
            {
                ispalindrome = true;
                start++;
                end--;
            }
            else
            {
                break;
                ispalindrome = false;
            }
        }

        return ispalindrome;
        // reverse(s.begin(), s.end());
    }
};

int main()
{
    string s;
    cout << "Enter Your String : " << endl;
    cin >> s;

    solution obj;
    bool ans = obj.palindrome(s);

    if (ans)
    {
        cout << "Your string is palindrome" << endl;
    }
    else
    {
        cout << "Your string is not palindrome" << endl;
    }
}