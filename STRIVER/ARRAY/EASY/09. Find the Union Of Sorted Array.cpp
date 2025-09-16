#include <bits/stdc++.h>
using namespace std;

class BruteSolution
{
public:
    vector<int> findUnion(vector<int> &arr1, vector<int> &arr2)
    {
        set<int> s; // ordered set to store unique elements in sorted order

        int n1 = arr1.size();
        int n2 = arr2.size();

        for (int i = 0; i < n1; i++)
        {
            s.insert(arr1[i]);
        }

        for (int i = 0; i < n2; i++)
        {
            s.insert(arr2[i]);
        }

        // transfer set elements to vector
        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};

class OptimalSolution
{
public:
    vector<int> findUnion(vector<int> &arr1, vector<int> &arr2)
    {
        int n1 = arr1.size();
        int n2 = arr2.size();
        int i = 0, j = 0;
        vector<int> ans;

        while (i < n1 && j < n2)
        {
            if (arr1[i] <= arr2[j])
            {
                if (ans.empty() || ans.back() != arr1[i])
                    ans.push_back(arr1[i]);
                i++;
            }
            else
            {
                if (ans.empty() || ans.back() != arr2[j])
                    ans.push_back(arr2[j]);
                j++;
            }
        }

        while (i < n1)
        {
            if (ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
        }

        while (j < n2)
        {
            if (ans.empty() || ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }

        return ans;
    }
};


int main()
{
    // BruteSolution obj;
    OptimalSolution obj;
    vector<int> arr1 = {1, 2, 4, 5, 6};
    vector<int> arr2 = {2, 3, 5, 7};

    vector<int> result = obj.findUnion(arr1, arr2);

    cout << "Union of arrays: ";
    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}
