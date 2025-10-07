#include <bits/stdc++.h>
using namespace std;

class BatterSolution
{
public:
    int findMissingNumber(vector<int> &arr, int n)
    {
        vector<int> hash(n + 1, 0); // create hash array of size n+1

        // Mark present elements
        int t = arr.size();
        for (int i = 0; i < t; i++)
        {
            hash[arr[i]] = 1;
        }

        // Find the missing number
        for (int i = 1; i <= n; i++)
        {
            if (hash[i] == 0)
                return i;
        }

        return -1; // just in case, though problem guarantees one missing
    }
};

class OptimalSolution
{
public:
    int findMissingNumber(vector<int> &arr, int n)
    {
        int sum = n * (n + 1) / 2;
        int total = 0;

        for (int i = 0; i < n - 1; i++)
        {
            total = total + arr[i];
        }
        return sum - total;
    }
};

int main()
{
    // BatterSolution obj;
    OptimalSolution obj;

    vector<int> arr = {1, 2, 4, 5, 6}; // missing 3
    int n = 6;                         // numbers from 1 to n

    int missing = obj.findMissingNumber(arr, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
