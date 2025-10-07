// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print(int n)
    {
        int s = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << s << " ";
                s++;
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