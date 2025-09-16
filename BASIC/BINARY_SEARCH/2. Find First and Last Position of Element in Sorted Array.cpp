#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &arr, int target)
    {
        int n = arr.size();
        int first = -1, last = -1;

        // First occurrence
        int start = 0, end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target)
            {
                first = mid + 1;   // store index
                end = mid - 1; // move left
            }
            else if (arr[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        // Last occurrence
        start = 0;
        end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target)
            {
                last = mid + 1;      // store index
                start = mid + 1; // move right
            }
            else if (arr[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return {first, last};
    }
};

int main()
{
    int size, key;

    cout << "Enter the number of Size of arr : ";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element: ";
        cin >> arr[i];
    }

    cout << "Enter the number which you want to find in arr: ";
    cin >> key;

    Solution obj;
    vector<int> ans = obj.searchRange(arr, key);

    cout << "First position: " << ans[0] << endl;
    cout << "Last position: " << ans[1] << endl;

    return 0;
}
