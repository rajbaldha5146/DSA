#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class solution
{
public:
    void reverseString(string &s)
    {
        int start = 0;
        int end = s.length() - 1;

        while (start < end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }

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
    obj.reverseString(s);
    cout << "Your revesed string is : " << s << endl;
}