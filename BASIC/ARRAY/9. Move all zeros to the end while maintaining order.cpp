// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void moveZerosToEnd(vector<int> &arr)
    {
        int count = arr.size();
        int j = -1; // Pointer to place zero elements

        for (int i = 0; i < count; i++)
        {
            if (arr[i] == 0)
            {
                j = i;
                break;
            }
        }

        for (int i = j + 1; i < count; i++)
        {
            if (arr[i] != 0)
            {
                swap(arr[j], arr[i]);
                j++;
            }
        }
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
    obj.moveZerosToEnd(arr);

    for (int num : arr)
    {
        cout << num << " ";
    }
}