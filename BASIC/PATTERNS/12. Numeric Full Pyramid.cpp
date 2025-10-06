// 1      1------6
// 12    21------4
// 123  321------2
// 12344321------0

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print(int n)
    {
        for (int i = 0; i < n; i++)
        {
            // number
            for (int j = 0; j < i + 1; j++)
            {
                cout << j + 1;
            }

            // space
            for (int j = 0; j < 2 * (n - i - 1); j++)
            {
                cout << " ";
            }

            // number
            for (int j = i + 1; j > 0; j--)
            {
                cout << j;
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