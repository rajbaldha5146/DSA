// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            int starta = 0;
            int startb = 1;
            for (int j = 0; j < i; j++)
            {
                if (i % 2 == 0)
                {
                    cout << starta;
                    starta = 1 - starta;
                }
                else
                {
                    cout << startb;
                    startb = 1 - startb;
                }
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