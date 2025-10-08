#include <bits/stdc++.h>
using namespace std;

class BatterSolution
{
public:
    // Function to left rotate array by D places
    void leftRotate(vector<int> &arr, int d)
    {
        vector<int> temp(d);
        int n = arr.size();

        for (int i = 0; i < d; i++)
        {
            temp[i] = arr[i];
        }

        for (int i = d; i < n; i++)
        {
            arr[i - d] = arr[i];
        }

        int j = 0;
        for (int i = n - d; i < n; i++)
        {
            arr[i] = temp[j];
            j++;
        }
    }
};

class OptimalSolution
{
public:
    // Function to left rotate array by D places
    void leftRotate(vector<int> &arr, int d)
    {
        int n = arr.size();
        if (n == 0)
            return;

        d %= n; // make d within [0, n-1]
        if (d < 0)
            d += n; // optional: support negative d
        if (d == 0)
            return; // nothing to do

        reverse(arr.begin(), arr.begin() + d);
        reverse(arr.begin() + d, arr.end());
        reverse(arr.begin(), arr.end());
    }
};

int main()
{
    int n, d;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of places to rotate: ";
    cin >> d;

    // BatterSolution obj;
    // obj.leftRotate(arr, d);

    OptimalSolution obj;
    obj.leftRotate(arr, d);

    cout << "Array after left rotation by " << d << " places: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
