#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string str)
{
    string result = "";
    set<char> fre;

    for (auto ch : str)
    {
        if (!fre.count(ch))
        {
            fre.insert(ch);
            result += ch;
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
