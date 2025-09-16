#include <iostream>
#include <vector>
using namespace std;

class solution
{
public:
    bool sorted(vector<int> &arr)
    {

        bool increasing = true;
        bool decreasing = true;

        int count = arr.size();

        for (int i = 0; i < count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                increasing = false; // Not increasing
            }
            if (arr[i] < arr[i + 1])
            {
                decreasing = false; // Not decreasing
            }
        }
        return increasing || decreasing;
    }
};

int main()
{
    int size;

    cout << "Enter the number of Size of arr : " << endl;
    cin >> size;

    // arr = {1,2,3,4,5};
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element" << endl;
        cin >> arr[i];
    }

    solution obj;
    if (obj.sorted(arr))
    {
        cout << "Array Is Sorted .....!!";
    }
    else
    {
        cout << "Array Is Not Sorted .....##";
    }
}