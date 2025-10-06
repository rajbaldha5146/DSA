//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print(int n)
    {
        for (int i = 0; i < n; i++)
        {
            // space
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }

            // abcd...first half
            char c = 'A';
            for (int j = 0; j < i + 1; j++)
            {
                cout << c;
                c++;
            }

            // abcd....second half
            for (char ch = c - 2; ch >= 'A'; ch--)
            {
                cout << ch;
            }

            // space
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            cout << endl;
        }
    }
};

int main()
{

    int n;
    cout << "Please enter the number of raws : ";
    cin >> n;

    solution obj;
    cout << "Your Pattern Is Here : " << endl;
    obj.print(n);
}