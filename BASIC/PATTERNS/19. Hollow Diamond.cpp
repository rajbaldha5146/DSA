// ⋆⋆⋆⋆⋆⋆⋆⋆⋆⋆
// ⋆⋆⋆⋆  ⋆⋆⋆⋆
// ⋆⋆⋆    ⋆⋆⋆
// ⋆⋆      ⋆⋆
// ⋆        ⋆
// ⋆        ⋆
// ⋆⋆      ⋆⋆
// ⋆⋆⋆    ⋆⋆⋆
// ⋆⋆⋆⋆  ⋆⋆⋆⋆
// ⋆⋆⋆⋆⋆⋆⋆⋆⋆⋆

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print(int n)
    {
        // first half part
        for (int i = n; i > 0; i--)
        {
            // star
            for (int j = i; j > 0; j--)
            {
                cout << "*";
            }

            // space
            for (int j = 0; j < 2 * (n - i); j++)
            {
                cout << " ";
            }

            // star
            for (int j = i; j > 0; j--)
            {
                cout << "*";
            }

            cout << endl;
        }

        // second half part
        for (int i = 0; i < n; i++)
        {
            // star
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }

            // space
            for (int j = 0; j < 2 * (n - i - 1); j++)
            {
                cout << " ";
            }

            // star
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
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