#include <iostream>
using namespace std;
char firstNonRepeatingChar(string str)
{
    int freq[26] = {0};
    int n = str.length();
    // Step 1: Count frequency of each character
    for (int i = 0; i < n; i++)
    {
        char ch = tolower(str[i]); // Optional: treat 'A' and 'a' as same
        if (ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++;
        }
    }
    // Step 2: Find first character with frequency 1
    for (int i = 0; i < n; i++)
    {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z' && freq[ch - 'a'] == 1)
        {
            return str[i]; // Return original character with case
        }
    }
    return '\0'; // Null character (means no non-repeating character)
}
int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    char result = firstNonRepeatingChar(input);
    if (result != '\0')
    {
        cout << "First non-repeating character is: " << result << endl;
    }
    else
    {
        cout << "No non-repeating character found." << endl;
    }
    return 0;
}