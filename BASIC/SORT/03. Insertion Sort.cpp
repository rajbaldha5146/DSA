#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void insertionSort(vector<int> &arr)
    {
        int n = arr.size();

        // Start from index 1 (as first element is already sorted)
        for (int i = 1; i < n; i++)
        {
            int current = arr[i]; // element to insert
            int j = i - 1;

            // Move elements of arr[0..i-1] that are greater than current
            // one position ahead to make space for current
            while (j >= 0 && arr[j] > current)
            {
                arr[j + 1] = arr[j];
                j--;
            }

            // Place current element in its correct position
            arr[j + 1] = current;
        }
    }

    void printArray(vector<int> &arr)
    {
        for (int num : arr)
        {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {9, 3, 1, 5, 4};

    cout << "Original Array: ";
    s.printArray(arr);

    s.insertionSort(arr);

    cout << "Sorted Array: ";
    s.printArray(arr);

    return 0;
}
