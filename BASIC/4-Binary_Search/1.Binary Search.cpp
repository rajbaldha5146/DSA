#include <iostream>
#include <vector>
using namespace std;

class solution
{
public:
    int binarySearch(vector<int> &arr, int key)
    {
        int start = 0;
        int end = arr.size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] == key)
            {
                return mid + 1;
            }
            else if (arr[mid] > key)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        // If key is not found, return -1
        return -1;
    }
};

int main()
{
    int size;
    int key;

    cout << "Enter the number of Size of arr : " << endl;
    cin >> size;

    // arr = {1,2,3,4,5};
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element" << endl;
        cin >> arr[i];
    }

    cout << "Enter the number which u find in arr : " << endl;
    cin >> key;

    solution obj;
    int ans = obj.binarySearch(arr,key);

    if(ans != -1)
    {
        cout << "your element is present on : " << ans << " location......" << endl;
    }
    else
    {
        cout << "your element is not present in this array........"<< endl;
    }
}