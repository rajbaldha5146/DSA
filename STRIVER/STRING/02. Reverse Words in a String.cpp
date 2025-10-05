#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Remove extra spaces
        string temp = "";
        stringstream ss(s);
        string word;

        vector<string> words;

        // Extract words one by one
        while (ss >> word) {
            words.push_back(word);
        }

        // Step 2: Reverse words
        reverse(words.begin(), words.end());

        // Step 3: Join words with single space
        for (int i = 0; i < words.size(); i++) {
            temp += words[i];
            if (i != words.size() - 1) {
                temp += " ";
            }
        }

        return temp;
    }
};

int main() {
    Solution sol;

    string s1 = "the sky is blue";
    cout << "Input: \"" << s1 << "\"\nOutput: \"" << sol.reverseWords(s1) << "\"" << endl;

    string s2 = "  hello world  ";
    cout << "Input: \"" << s2 << "\"\nOutput: \"" << sol.reverseWords(s2) << "\"" << endl;

    string s3 = "a good   example";
    cout << "Input: \"" << s3 << "\"\nOutput: \"" << sol.reverseWords(s3) << "\"" << endl;

    return 0;
}
