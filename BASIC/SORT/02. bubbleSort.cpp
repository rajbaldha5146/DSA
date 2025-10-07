#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Bubble Sort (outer loop from n-1 to 0)
    void bubbleSort(vector<int> &arr)
    {
        int n = arr.size();

        // Outer loop runs from n-1 down to 0
        for (int i = n - 1; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    void printArray(const vector<int> &arr)
    {
        cout << "[";
        int n = arr.size();
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i];
            if (i < n - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
};

int main()
{
    Solution sorter;

    vector<int> arr2 = {15, 8, 20, 1, 10, 4};

    cout << "Original Array (Bubble Sort): ";
    sorter.printArray(arr2);

    sorter.bubbleSort(arr2);

    cout << "Sorted Array (Bubble Sort):   ";
    sorter.printArray(arr2);

    return 0;
}
