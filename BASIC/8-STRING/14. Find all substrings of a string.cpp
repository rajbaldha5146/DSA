#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> allSubstrings(string s)
    {
        // Step 1: Initialize a vector to store all substrings
        vector<string> ans;

        // Step 2: Use two nested loops:
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            string h = "";
            for (int j = i; j < n; j++)
            {
                h += s[j];
                ans.push_back(h);
            }
        }

        // Step 4: Return the vector containing all substrings
        return ans;
    }
};

int main()
{
    Solution obj;
    string s;
    cout << "Enter a string: ";
    cin >> s;

    vector<string> result = obj.allSubstrings(s);

    cout << "All substrings are:\n";
    for (auto str : result)
    {
        cout << str << "\n";
    }

    return 0;
}
