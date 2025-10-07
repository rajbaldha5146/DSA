// 1
// 22
// 333
// 4444
// 55555

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print(int n)
    {

        int b = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << b;
            }

            b++;
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