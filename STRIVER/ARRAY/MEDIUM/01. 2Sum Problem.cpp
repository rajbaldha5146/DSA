#include <bits/stdc++.h>
using namespace std;

class BruteSolution
{
public:
    vector<int> twoSum(vector<int> &arr, int target)
    {
        int count = arr.size();

        for (int i = 0; i < count; i++)
        {
            for (int j = i + 1; i < count; i++)
            {
                if (arr[i] + arr[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

class BatterSolution
{
public:
    vector<int> twoSum(vector<int> &arr, int target)
    {
        unordered_map<int, int> map;

        int count = arr.size();

        for (int i = 0; i < count; i++)
        {
            int find = target - arr[i];

            if (map.count(find))
            {
                return {map[find], i};
            }
            else
            {
                map[arr[i]] = i;
            }
        }
        return {};
    }
};

//only for sorted array
// class OptimalSolution
// {
// public:
//     vector<int> twoSum(vector<int> &arr, int target)
//     {
//         int n = arr.size();
//         int i = 0;
//         int j = n-1;

//         while (i < j)
//         {
//             int sum = arr[i] + arr[j];

//             if (sum == target)
//             {
//                 return {i, j};
//             }

//             if (sum < target)
//             {
//                 i++;
//             }
//             else
//             {
//                 j--;
//             }
//         }

//         return {};
//     }
// };

int main()
{
    BatterSolution obj;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 19;

    vector<int> result = obj.twoSum(arr, target);

    if (!result.empty())
    {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    }
    else
    {
        cout << "No pair found" << endl;
    }

    return 0;
}
