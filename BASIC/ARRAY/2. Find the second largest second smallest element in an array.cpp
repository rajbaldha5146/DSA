#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class solution
{
public:
    void findSecondMinMax(vector<int> &arr)
    {
        int min = INT_MAX;
        int max = INT_MIN;
        int smin = INT_MAX;
        int smax = INT_MIN;
        int size = arr.size();

        for (int i = 0; i < size; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        for (int i = 0; i < size; i++)
        {
            if (arr[i] > smax && arr[i] != max)
            {
                smax = arr[i];
            }
            if (arr[i] < smin && arr[i] != min)
            {
                smin = arr[i];
            }
        }

        cout << "Second Maximum element is : " << smax << endl;
        cout << "Second Minimum element is : " << smin << endl;
    }
};

int main()
{
    int size;

    cout << "Enter the number of Size of arr : " << endl;
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element" << endl;
        cin >> arr[i];
    }

    // for (int i = 0; i < size; i++)
    // {
    //     cout <<  arr1[i]  << endl;
    // }

    solution obj;
    obj.findSecondMinMax(arr);
}