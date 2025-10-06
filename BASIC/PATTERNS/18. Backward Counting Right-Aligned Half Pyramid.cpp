//  E
//  D E
//  C D E
//  B C D E
//  A B C D E

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print(int n)
    {

        for (int i = 0; i < n; i++)
        {
            char ch = 'E' - i; // starting letter of each row
            for (int j = 0; j < i + 1; j++)
            {
                cout << ch << " "; 
                ch++;
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