#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isRotation(string s1, string s2) {
        // Step 1: If lengths differ, they can't be rotations
        if (s1.size() != s2.size())
            return false;

        // Step 2: Concatenate s1 with itself
        string temp = s1 + s1;

        // Step 3: If s2 exists as a substring inside temp → rotation confirmed
        if (temp.find(s2) != string::npos)
            return true;

        // Step 4: Otherwise, not a rotation
        return false;
    }
};

int main() {
    Solution obj;
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    bool result = obj.isRotation(s1, s2);
    cout << (result ? "One string is rotation of another" : "Not a rotation") << endl;

    return 0;
}
