#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findIntersection(vector<int> &arr1, vector<int> &arr2)
    {
        int n1 = arr1.size();
        int n2 = arr2.size();
        int i = 0, j = 0;
        vector<int> ans;

        while (i < n1 && j < n2)
        {
            if (arr1[i] < arr2[j])
            {
                i++;
            }
            else if (arr2[j] < arr1[i])
            {
                j++;
            }
            else
            {
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};


int main()
{
    Solution obj;

    vector<int> arr1 = {1, 2, 2, 3, 4, 5};
    vector<int> arr2 = {2, 2, 3, 5, 6};

    vector<int> result = obj.findIntersection(arr1, arr2);

    cout << "Intersection: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
