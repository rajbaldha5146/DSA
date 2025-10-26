#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findLongestWord(string sentence) {
        
        stringstream ss(sentence);
        vector<string>words;
        string word;

        while( ss >> word )
        {
            words.push_back(word);
        }

        int length = 0;
        string ans = "";
        int n = words.size();

        for( int i = 0; i < n; i++ )
        {
            string temp = words[i];
            int m = temp.size();
            if( m > length )
            {
                length = temp.size();
                ans = ans + temp;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string result = obj.findLongestWord(sentence);
    cout << "Longest word: " << result << endl;

    return 0;
}
