#include <iostream>
#include <vector>
using namespace std;

class solution
{
public:
    int missigNumber(vector<int> &arr, int n)
    {
        int total = n * (n + 1) / 2;
        int count = n - 1;
        int sum = 0;

        for (int i = 0; i < count; i++)
        {
            sum += arr[i];
        }

        return total - sum;
    }
};

int main()
{
    int size;

    cout << "Enter the number of Size - 1 of arr : " << endl;
    cin >> size;

    int n = size + 1;

    // arr = {1,2,3,4,5};
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element" << endl;
        cin >> arr[i];
    }

    solution obj;
    int ans = obj.missigNumber(arr, n);

    cout << "Missing Number Is : " << ans << endl;
}