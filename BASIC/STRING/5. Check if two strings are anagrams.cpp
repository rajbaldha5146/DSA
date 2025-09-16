#include <iostream>
#include <string>
#include <vector>
#include <cctype> // For tolower()

using namespace std;

class solution
{
public:
    void isAnagrams(string &s1, string &s2)
    {
        // Check for length mismatch
        if (s1.length() != s2.length())
        {
            cout << "Strings are not anagrams (lengths do not match)." << endl;
            return;
        }

        vector<int> count(26, 0);

        // Count character frequencies for both strings in a single loop
        int n = s1.length();
        for (int i = 0; i < n; i++)
        {
            // Convert to lowercase and check if it's an alphabet
            char ch1 = tolower(s1[i]);
            char ch2 = tolower(s2[i]);

            if (ch1 >= 'a' && ch1 <= 'z')
            {
                count[ch1 - 'a']++;
            }
            if (ch2 >= 'a' && ch2 <= 'z')
            {
                count[ch2 - 'a']--;
            }
        }

        // Check if all counts are zero
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                cout << "Strings are not anagrams." << endl;
                return;
            }
        }

        cout << "Strings are anagrams." << endl;
    }
};

int main()
{
    string s1;
    cout << "Enter Your String s1: " << endl;
    getline(cin, s1);

    string s2;
    cout << "Enter Your String s2: " << endl;
    getline(cin, s2);

    solution obj;
    obj.isAnagrams(s1, s2);
    return 0;
}