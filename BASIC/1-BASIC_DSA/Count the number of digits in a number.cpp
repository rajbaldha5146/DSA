#include <iostream>
using namespace std;

class solution
{
    public:

        int count(int n)
        {   
            int count=0;
            while(n!=0)
            {
                n = n/10;
                count++;
            }

            return count;
        }

};

int main()
{
    int n;

    cout << "enter the number" << endl;
    cin >> n;

    solution obj;
    int ans = obj.count(n);

    cout << "The Total Number Of Digit Of "<< n << " Is : " << ans <<endl;
}