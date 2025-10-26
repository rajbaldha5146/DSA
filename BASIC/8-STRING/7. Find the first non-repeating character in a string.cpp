// #include <iostream>
#include<bits/stdc++.h>
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

char firstNonRepeatingChar_map(string str)
{
    unordered_map<char,int>fre;

    for( char ch : str )
    {
        fre[ch]++;
    }

    int n = str.size();
    for( int i = 0; i < n; i++ )
    {
        if( fre[str[i]] == 1 )
        {
            return str[i];
        }
    }
    return '\0';
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    char result = firstNonRepeatingChar_map(input);
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