#include <iostream>
#include <string>
using namespace std;

class solution
{
public:
    void count(string &s)
    {
        int isVovel = 0;
        int isConsonent = 0;

        for (char ch : s)
        {
            char c = tolower(ch);

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                isVovel++;
            }
            else if (c > 'a' && c < 'z')
            {
                isConsonent++;
            }
            else
            {
                continue;
            }
        }

        cout << "Vowels: " << isVovel << endl;
        cout << "Consonants: " << isConsonent << endl;
    }
};

int main()
{
    string s;
    cout << "Enter Your String : " << endl;
    // cin >> s;

    getline(cin, s);

    solution obj;
    obj.count(s);
}