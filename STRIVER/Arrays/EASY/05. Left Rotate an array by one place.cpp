#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to left rotate array by one place
    void leftRotateByOne(vector<int> &arr)
    {
        int n = arr.size(); // store size in variable
        if (n <= 1)
            return; // no rotation needed

        int first = arr[0]; // store first element
        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i]; // shift each element left
        }
        arr[n - 1] = first; // put first element at the end
    }
};

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    obj.leftRotateByOne(arr);

    cout << "Array after left rotation by one place: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
