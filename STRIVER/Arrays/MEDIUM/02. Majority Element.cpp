#include <bits/stdc++.h>
using namespace std;

class BatterSolution
{
public:
    int majorityElement(vector<int> &arr)
    {
        int count = arr.size();

        unordered_map<int, int> v;

        for (int i = 0; i < count; i++)
        {
            if (v.count(arr[i]))
            {
                v[arr[i]]++;
            }
            else
            {
                v[arr[i]] = 1;
            }
        }

        for (auto it : v)
        {
            if (it.second > (count / 2))
            {
                return it.first;
            }
        }

        return -1;
    }
};

class MooreSolution
{
public:
    int majorityElement(vector<int> &arr)
    {
        int count = 0;
        int ele;
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            if( count == 0)
            {
                count = 1;
                ele = arr[i];
            }
            else if( arr[i] == ele)
            {
                count ++;
            }
            else
            {
                count --;
            }
        }

        return ele;
        
        // int cnt = 0;

        // for (int i = 0; i < n; i++)
        // {
        //     if( arr[i] == ele)
        //     {
        //         cnt++;
        //     }
        // }
        
        // return cnt;
    }
};

int main()
{
    MooreSolution obj;
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority Element: " << obj.majorityElement(arr) << endl;

    return 0;
}
