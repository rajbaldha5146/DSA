#include <bits/stdc++.h>
using namespace std;

int countSubarraysWithSumK(vector<int> &arr, int k)
{
    int n = arr.size(); // ✅ maintain size in variable
    unordered_map<int, int> m;

    m[0] = 1; // ✅ very important: prefix sum 0 occurs once
    int PrefixSum = 0;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        PrefixSum += arr[i]; // update prefix sum

        if (m.count(PrefixSum - k))
        {
            // ✅ subarray found with sum = k
            total += m[PrefixSum - k];
            m[PrefixSum]++;
        }
        else
        {
            m[PrefixSum] = 1;
        }
    }
    return total;
}

int main()
{
    vector<int> arr = {3, 4, 7, 2, -3, 1, 4, 2};
    int k = 7;
    cout << "Number of subarrays with sum " << k << " = "
         << countSubarraysWithSumK(arr, k) << endl;
    return 0;
}
