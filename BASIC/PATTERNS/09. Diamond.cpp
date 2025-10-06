//     ⋆
//    ⋆⋆⋆
//   ⋆⋆⋆⋆⋆
//  ⋆⋆⋆⋆⋆⋆⋆
// ⋆⋆⋆⋆⋆⋆⋆⋆⋆
// ⋆⋆⋆⋆⋆⋆⋆⋆⋆
//  ⋆⋆⋆⋆⋆⋆⋆
//   ⋆⋆⋆⋆⋆
//    ⋆⋆⋆
//     ⋆

//     ⋆
//    ⋆⋆⋆
//   ⋆⋆⋆⋆⋆
//  ⋆⋆⋆⋆⋆⋆⋆
// ⋆⋆⋆⋆⋆⋆⋆⋆⋆
//  ⋆⋆⋆⋆⋆⋆⋆
//   ⋆⋆⋆⋆⋆
//    ⋆⋆⋆
//     ⋆

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void print1(int n)
    {
        for (int i = 0; i < n; i++)
        {
            // space
            for (int j = n - i - 1; j > 0; j--)
            {
                cout << " ";
            }

            //*
            for (int j = (2 * (i + 1)) - 1; j > 0; j--)
            {
                cout << "*";
            }

            // space
            for (int j = n - i - 1; j > 0; j--)
            {
                cout << " ";
            }
            cout << endl;
        }
        for (int i = n; i > 0; i--)
        {
            // apace
            for (int j = n - i; j > 0; j--)
            {
                cout << " ";
            }

            // star
            for (int j = (2 * i) - 1; j > 0; j--)
            {
                cout << "*";
            }

            // space
            for (int j = n - i; j > 0; j--)
            {
                cout << " ";
            }
            cout << endl;
        }
    }
    void print2(int n)
    {
        for (int i = 0; i < n; i++)
        {
            // space
            for (int j = n - i - 1; j > 0; j--)
            {
                cout << " ";
            }

            //*
            for (int j = (2 * (i + 1)) - 1; j > 0; j--)
            {
                cout << "*";
            }

            // space
            for (int j = n - i - 1; j > 0; j--)
            {
                cout << " ";
            }
            cout << endl;
        }
        for (int i = n-1; i > 0; i--)
        {
            // apace
            for (int j = n - i; j > 0; j--)
            {
                cout << " ";
            }

            // star
            for (int j = (2 * i) - 1; j > 0; j--)
            {
                cout << "*";
            }

            // space
            for (int j = n - i; j > 0; j--)
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
    obj.print1(n);
    obj.print2(n);
}