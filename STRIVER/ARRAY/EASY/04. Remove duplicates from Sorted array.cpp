#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to remove duplicates from a sorted array
    int removeDuplicates(vector<int> &arr)
    {
        int n = arr.size(); // store size in variable
        if (n == 0)
            return 0;

        int index = 1; // position to place the next unique element

        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                arr[index] = arr[i]; // overwrite duplicate
                index++;
            }
        }
        return index; // new length of array without duplicates
    }
};

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    int newLength = obj.removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
