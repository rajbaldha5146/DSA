#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if array is sorted in non-decreasing order
    bool isSorted(vector<int> &arr)
    {
        int n = arr.size(); // store size in variable
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                return false; // if any element is smaller than previous → not sorted
            }
        }
        return true; // no violations → sorted
    }
};

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    if (obj.isSorted(arr))
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is NOT sorted." << endl;
    }

    return 0;
}
