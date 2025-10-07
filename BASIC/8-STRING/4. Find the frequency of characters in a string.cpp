#include <iostream>
#include <string>
#include <vector>
using namespace std;

class solution
{
public:
    void frequency(string &s)
    {
        vector<int> countSmall(26, 0);
        vector<int> countBig(26, 0);

        for (char ch : s)
        {
            if (ch >= 'a' && ch <= 'z')
            {
                countSmall[ch - 'a']++;
            }
            else if (ch >= 'A' && ch <= 'Z')
            {
                countBig[ch - 'A']++;
            }
            else
            {
                continue;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (countSmall[i] > 0)
            {
                cout << static_cast<char>('a' + i) << " : " << countSmall[i] << endl;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (countBig[i] > 0)
            {
                cout << static_cast<char>('A' + i) << " : " << countBig[i] << endl;
            }
        }
    }
};

int main()
{
    string s;
    cout << "Enter Your String : " << endl;
    // cin >> s;

    getline(cin, s);

    solution obj;
    obj.frequency(s);
}