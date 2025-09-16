#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int maxLength = 0;

        for (int i = 0; i < n; i++)
        {
            unordered_set<char> seen;  // hash set for this substring
            for (int j = i; j < n; j++)
            {
                if (seen.count(s[j]))
                {
                    // duplicate found → stop this substring
                    break;
                }
                seen.insert(s[j]);
                maxLength = max(maxLength, j - i + 1);
            }
        }

        return maxLength;
    }
};

int main()
{
    Solution obj;
    string s = "abcabcbb";

    cout << "Length of Longest Substring: " << obj.lengthOfLongestSubstring(s) << endl;

    return 0;
}
