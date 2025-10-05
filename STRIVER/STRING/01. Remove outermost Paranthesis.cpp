#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int balance = 0;  // track depth

        for (char c : s) {
            if (c == '(') {
                if (balance > 0) {
                    result += c; // only add if not outermost
                }
                balance++;
            } else {
                balance--;
                if (balance > 0) {
                    result += c; // only add if not outermost
                }
            }
        }
        return result;
    }
};

int main() {
    Solution sol;

    string s1 = "(()())(())";
    cout << "Input: " << s1 << "\nOutput: " << sol.removeOuterParentheses(s1) << endl;

    string s2 = "(()())(())(()(()))";
    cout << "Input: " << s2 << "\nOutput: " << sol.removeOuterParentheses(s2) << endl;

    string s3 = "()()";
    cout << "Input: " << s3 << "\nOutput: " << sol.removeOuterParentheses(s3) << endl;

    return 0;
}
