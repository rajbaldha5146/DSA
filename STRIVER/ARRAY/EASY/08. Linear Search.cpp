#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to perform linear search
    int linearSearch(vector<int> &arr, int target)
    {
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == target)
            {
                return i; // return index if found
            }
        }
        return -1; // not found
    }
};

int main()
{
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    Solution obj;
    int result = obj.linearSearch(arr, target);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
