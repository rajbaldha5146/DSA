#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countZeroSumSubarrays(vector<int> &arr)
    {
        int n = arr.size(); // ✅ maintain size in variable
        unordered_map<int, int> m;
        m[0] = 1; // prefix sum 0 occurs once initially
        int PrefixSum = 0;
        int total = 0;

        for (int i = 0; i < n; i++)
        {
            PrefixSum += arr[i]; // update prefix sum

            if (m.count(PrefixSum))
            {
                // ✅ subarray found with sum = 0
                total += m[PrefixSum];
                m[PrefixSum]++;
            }
            else
            {
                m[PrefixSum] = 1;
            }
        }
        return total;
    }
};

int main()
{
    Solution obj;

    vector<int> arr = {4, 2, -3, -1, 0, 4};
    int result = obj.countZeroSumSubarrays(arr);

    cout << "Number of zero-sum subarrays: " << result << endl;

    return 0;
}
