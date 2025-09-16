#include <iostream>
#include <algorithm>
using namespace std;

class solution
{
    public:
        int maxOfThree(int n1, int n2, int n3)
        {
            // return max(n1,max(n2,n3));

            if (n1 >= n2 && n1 >= n3)
                return n1;
            else if (n2 >= n1 && n2 >= n3)
                return n2;
            else
                return n3;
        }
};

int main()
{
    int n1;
    int n2;
    int n3;

    cout << "enter the 1st number" << endl;
    cin >> n1;

    cout << "enter the 2nd number" << endl;
    cin >> n2;

    cout << "enter the 3rd number" << endl;
    cin >> n3;

    solution obj;
    int ans = obj.maxOfThree(n1, n2, n3);

    cout << "Max of numbers " << n1 << " " << n2 << " " << n3 << " is : " << ans << endl;
}