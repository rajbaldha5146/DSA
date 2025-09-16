#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &arr, int target)
    {
        int start = 0, end = arr.size() - 1;
        int ans = arr.size(); // default: insert at end

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target)
            {
                return mid; // found directly
            }
            else if (arr[mid] < target)
            {
                start = mid + 1; // search right
            }
            else
            {
                ans = mid;     // possible insert position
                end = mid - 1; // search left
            }
        }
        return ans;
    }
};

int main()
{
    int size, target;

    cout << "Enter the number of elements: ";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    Solution obj;
    int pos = obj.searchInsert(arr, target);

    cout << "The target should be at index: " << pos << endl;

    return 0;
}
