#include <iostream>
// #include <bits/stdc++.h>
#include <cmath>
using namespace std;

class solution
{
public:
    void numberPrime(int n)
    {
        bool isPrime = true;

        if (n <= 1)
        {
            isPrime = false;
        }
        else
        {

            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
        {
            cout << "number " << n << " is Prime Number " << endl;
        }
        else
        {
            cout << "number " << n << " is Not Prime Number " << endl;
        }
    }
};

int main()
{

    int number;

    cout << "Enter The Number :" << endl;
    cin >> number;

    solution obj;
    obj.numberPrime(number);
}