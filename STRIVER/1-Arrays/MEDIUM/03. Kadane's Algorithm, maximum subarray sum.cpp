#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &arr)
    {
        int n = arr.size();
        int maxSum = arr[0];
        int currentSum = arr[0];

        for (int i = 1; i < n; i++)
        {
            // Either extend the previous subarray or start a new subarray from arr[i]
            currentSum = max(arr[i], currentSum + arr[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum Subarray Sum: " << obj.maxSubArray(arr) << endl;

    return 0;
}
