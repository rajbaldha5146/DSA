#include <bits/stdc++.h>
using namespace std;

class BruteSolution
{
public:
    // Function to move all zeros to the end
    void moveZeroes(vector<int> &arr)
    {
        vector<int> temp;
        int count = arr.size();

        for (int i = 0; i < count; i++)
        {
            if (arr[i] != 0)
            {
                temp.push_back(arr[i]);
            }
        }

        int tsize = temp.size();
        for (int i = 0; i < tsize; i++)
        {
            arr[i] = temp[i];
        }

        for (int i = tsize; i < count; i++)
        {
            arr[i] = 0;
        }
    }
};

class OptimalSolution
{
public:
    // Function to move all zeros to the end
    void moveZeroes(vector<int> &arr)
    {
        int j = -1;
        int count = arr.size();

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
                arr[j] = arr[i];
                j++;
                arr[i] = 0;
            }
        }
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

    // BruteSolution obj;
    // obj.moveZeroes(arr);

    OptimalSolution obj;
    obj.moveZeroes(arr);

    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
