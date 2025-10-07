#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the largest element in an array
    int largestElement(vector<int> &arr)
    {
        int largest = INT_MIN; // Start with the smallest possible integer
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i]; // Update if current element is greater
            }
        }
        return largest;
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
    int result = obj.largestElement(arr);
    cout << "Largest element in the array: " << result << endl;

    return 0;
}
