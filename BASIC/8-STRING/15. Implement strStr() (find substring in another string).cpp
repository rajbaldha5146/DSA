#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        // Step 1: Empty needle → return 0
        if (m == 0) return 0;

        // Step 2: Loop through each possible start position
        for (int i = 0; i <= n - m; i++) {
            int j = 0;

            // Step 3: Check character by character
            for (; j < m; j++) {
                if (haystack[i + j] != needle[j])
                    break; // mismatch → stop
            }

            // Step 4: If full needle matched
            if (j == m) return i;
        }

        // Step 5: Needle not found
        return -1;
    }
};

int main() {
    Solution obj;
    string haystack, needle;

    cout << "Enter haystack string: ";
    cin >> haystack;
    cout << "Enter needle string: ";
    cin >> needle;

    int index = obj.strStr(haystack, needle);
    cout << "First occurrence index: " << index << endl;

    return 0;
}
