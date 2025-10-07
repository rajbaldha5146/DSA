// ⋆⋆⋆⋆⋆
// ⋆⋆⋆⋆
// ⋆⋆⋆
// ⋆⋆
// ⋆

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = n - i; j >= 1; j--)
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