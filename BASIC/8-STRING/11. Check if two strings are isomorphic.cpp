#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, char> mapST; // s -> t mapping
        unordered_map<char, char> mapTS; // t -> s mapping

        int n = s.size();
        for (int i = 0; i < n; i++) {
            char ch1 = s[i];
            char ch2 = t[i];

            // If mapping exists in s->t and doesn't match current character
            if (mapST.count(ch1) && mapST[ch1] != ch2)
                return false;

            // If mapping exists in t->s and doesn't match current character
            if (mapTS.count(ch2) && mapTS[ch2] != ch1)
                return false;

            // Otherwise, create a new mapping
            mapST[ch1] = ch2;
            mapTS[ch2] = ch1;
        }

        return true;
    }
};

int main() {
    Solution obj;
    string s, t;

    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    bool result = obj.isIsomorphic(s, t);
    cout << (result ? "Strings are isomorphic" : "Strings are not isomorphic") << endl;

    return 0;
}
