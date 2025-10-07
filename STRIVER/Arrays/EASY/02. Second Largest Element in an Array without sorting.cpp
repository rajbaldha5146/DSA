#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find second largest element
    int secondLargest(vector<int> &arr)
    {
        int n = arr.size(); // store size in variable
        if (n < 2)
        {
            // Not enough elements for second largest
            return -1;
        }

        int largest = INT_MIN;
        int second = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
            {
                second = largest; // update second
                largest = arr[i]; // update largest
            }
            else if (arr[i] > second && arr[i] < largest)
            {
                second = arr[i]; // update only second
            }
        }

        if (second == INT_MIN)
        {
            return -1; // means no second largest (all elements same)
        }
        return second;
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
    int result = obj.secondLargest(arr);

    if (result == -1)
    {
        cout << "No second largest element found." << endl;
    }
    else
    {
        cout << "Second largest element in the array: " << result << endl;
    }

    return 0;
}
