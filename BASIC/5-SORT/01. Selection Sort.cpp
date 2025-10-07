#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void selectionSort(vector<int> &arr)
    {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++)
        {
            int min = i;

            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }

                if (min != i)
                {
                    swap(arr[i], arr[min]);
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
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
};

int main()
{
    Solution sorter;

    vector<int> arr1 = {9, 5, 2, 7, 1, 8, 3, 6, 4};
    cout << "Original Array: ";
    sorter.printArray(arr1);

    sorter.selectionSort(arr1);

    cout << "Sorted Array:   ";
    sorter.printArray(arr1);

    return 0;
}
