#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        // Traverse from the end until we find an odd digit
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) {
                return num.substr(0, i + 1);  // return substring till that odd digit
            }
        }
        return ""; // no odd digit found
    }
};

int main() {
    Solution sol;

    string s1 = "35427";
    cout << "Input: " << s1 << "\nOutput: " << sol.largestOddNumber(s1) << endl;

    string s2 = "4206";
    cout << "Input: " << s2 << "\nOutput: " << sol.largestOddNumber(s2) << endl;

    string s3 = "52";
    cout << "Input: " << s3 << "\nOutput: " << sol.largestOddNumber(s3) << endl;

    string s4 = "123456";
    cout << "Input: " << s4 << "\nOutput: " << sol.largestOddNumber(s4) << endl;

    return 0;
}
