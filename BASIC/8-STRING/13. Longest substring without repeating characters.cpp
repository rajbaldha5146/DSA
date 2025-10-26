#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        int n = s.size();
        int maxi = 0;

        for (int i = 0; i < n; i++)
        {
            set<char> seen;

            for (int j = i; j < n; j++)
            {
                char ch = s[j];
                if (seen.count(ch) == 1)
                {
                    break;
                }

                int len = j - i + 1;
                maxi = max(maxi, len);
                seen.insert(s[j]);
            }
        }

        return maxi;
    }

    int lengthOfLongestSubstringSlidingWindaw(string s)
    {
        int n = s.size();
        int l = 0;
        int maxi = 0;
        map<char, int> hash; // or unordered_map<char,int> for faster access

        for (int r = 0; r < n; r++)
        {
            char ch = s[r];

            if (hash.count(ch))
            {
                // move left pointer forward (if necessary)
                l = hash[ch] + 1;
            }

            // update last seen index of current char
            hash[ch] = r;

            // calculate max length
            maxi = max(maxi, r - l + 1);
        }

        return maxi;
    }
};

int main()
{
    Solution obj;
    string s;
    cout << "Enter string: ";
    cin >> s;

    int result = obj.lengthOfLongestSubstringSlidingWindaw(s);
    cout << "Length of longest substring without repeating characters: " << result << endl;

    return 0;
}
