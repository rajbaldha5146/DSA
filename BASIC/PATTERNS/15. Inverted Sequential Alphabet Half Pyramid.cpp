// ABCDE
// ABCD
// ABC
// AB
// A

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print(int n)
    {
        for (int i = n; i > 0; i--)
        {
            for (char ch = 'A'; ch < 'A' + i; ch++)
            {
                cout << ch;
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
