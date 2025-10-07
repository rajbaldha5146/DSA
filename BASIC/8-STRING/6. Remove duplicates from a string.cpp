#include <iostream>
using namespace std;
string removeDuplicates(string str)
{
    bool seen[26] = {false}; // Track if a letter has already appeared
    string result = "";
    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        char ch = tolower(str[i]);
        // Check if character is a letter
        if (ch >= 'a' && ch <= 'z')
        {
            if (!seen[ch - 'a'])
            {
                seen[ch - 'a'] = true; // Mark as seen
                result += str[i];      // Keep original casing
            }
        }
        else
        {
            // Optional: keep non-alphabet characters too
            result += str[i];
        }
    }
    return result;
}
int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string output = removeDuplicates(input);
    cout << "String after removing duplicates: " << output << endl;
    return 0;
}
