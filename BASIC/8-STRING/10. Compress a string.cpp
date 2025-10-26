// ⦁	Compress a string (e.g. "aaabb" → "a3b2")
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string compressString(string s)
    {
        string ans = "";
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            int count = 1; // start counting this character

            // count consecutive duplicates
            while (i + 1 < n && s[i] == s[i + 1])
            {
                count++;
                i++;
            }

            ans += s[i];             // add the character
            ans += to_string(count); // add its count
        }

        return ans;
    }
};

int main()
{
    Solution obj;
    string s;

    cout << "Enter a string: ";
    cin >> s;

    string result = obj.compressString(s);
    cout << "Compressed string: " << result << endl;

    return 0;
}
