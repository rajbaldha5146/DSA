#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class solution
{
public:
    string reverseString(string &s)
    {
        int start = 0;
        int end = s.length() - 1;
        string ans = s;

        while (start < end)
        {
            swap(ans[start], ans[end]);
            start++;
            end--;
        }

        return ans;
        // reverse(s.begin(), s.end());
    }
};

int main()
{
    string s;
    cout << "Enter Your String : " << endl;
    // cin >> s;
    
    // Add line to read the full string, including spaces
    getline(cin, s);

    solution obj;
    string ans = obj.reverseString(s);
    cout << "Your revesed string is : " << ans << endl;
}