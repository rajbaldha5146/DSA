#include <iostream>
using namespace std;

class solution
{
public:
    int power(int n)
    {
        if (n == 0)
        {
            return 1;
        }

        return 2 * power(n - 1);
    }
};

int main()
{
    int n;
    cout << "Entor the number : " << endl;
    cin >> n;

    solution obj;
    cout << "Here it is 2^("<< n <<")" << " : " << obj.power(n) << endl;
}