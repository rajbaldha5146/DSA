#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;  // stores last index of characters
        int left = 0;                 // left boundary of window
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            char ch = s[right];

            // If char is already seen, move left pointer
            if (mp.find(ch) != mp.end() && mp[ch] >= left) {
                left = mp[ch] + 1; // skip duplicate
            }

            mp[ch] = right;  // update last seen index
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

int main() {
    Solution sol;

    string s1 = "abcabcbb";
    cout << "Input: " << s1 << "\nOutput: " << sol.lengthOfLongestSubstring(s1) << endl;

    string s2 = "bbbbb";
    cout << "Input: " << s2 << "\nOutput: " << sol.lengthOfLongestSubstring(s2) << endl;

    string s3 = "pwwkew";
    cout << "Input: " << s3 << "\nOutput: " << sol.lengthOfLongestSubstring(s3) << endl;

    string s4 = "";
    cout << "Input: " << s4 << "\nOutput: " << sol.lengthOfLongestSubstring(s4) << endl;

    return 0;
}
