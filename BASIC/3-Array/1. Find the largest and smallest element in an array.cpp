// #include <iostream>
// #include <vector>
// #include <climits>
#include<bits/stdc++.h>
using namespace std;

class solution
{
public:

    void findMinMax(vector<int> &arr)
    {
        int min = INT_MAX;
        int max = INT_MIN;
        int size = arr.size();

        for (int i = 0; i < size; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }
        
        cout << "Maximum element is : " << max  << endl;
        cout << "Minimum element is : " << min << endl;
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
    obj.findMinMax(arr);

}