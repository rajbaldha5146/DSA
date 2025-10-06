// 12345
// 1234
// 123
// 12
// 1

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print(int n)
    {
        for (int i = 0; i < n; i++)
        {
            int t = 1;
            for (int j = n - i; j > 0; j--)
            {
                cout << t;
                t++;
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