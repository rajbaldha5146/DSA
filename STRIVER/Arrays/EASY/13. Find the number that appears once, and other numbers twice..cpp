#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &arr)
    {
        int n = arr.size(); // store size in variable
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans ^= arr[i]; // XOR all elements
        }

        return ans; // the number that appears once
    }
};

int main()
{
    Solution obj;

    vector<int> arr = {2, 3, 2, 4, 4};
    int result = obj.singleNumber(arr);

    cout << "The number that appears once is: " << result << endl;

    return 0;
}
