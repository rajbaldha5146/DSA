// #include <iostream>
// #include <vector>
#include<bits/stdc++.h>
using namespace std;

class solution
{
public:
    void findDuplicate(vector<int> &arr)
    {
        int count = arr.size();
        vector<int> ans;

        for (int i = 0; i < count; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                if (arr[i] == arr[j])
                {
                    // check if already added
                    bool alreadyAdded = false;
                    int b = ans.size();

                    for (int k = 0; k < b; k++)
                    {
                        if (ans[k] == arr[i])
                        {
                            alreadyAdded = true;
                            break;
                        }
                    }
                    if (!alreadyAdded)
                    {
                        ans.push_back(arr[i]);
                    }
                }
            }
        }

        cout << "Duplicate Elements are : ";
        int n = ans.size();
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
    }

    void OptimalFindDuplicate(vector<int> &arr)
    {
        int count = arr.size();
        unordered_map<int,int>ans;

        for (int i = 0; i < count; i++)
        {
            ans[arr[i]]++;
        }
        
        for(auto item : ans)
        {
            if(item.second > 1)
            {
                cout << item.first << " ";
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
    // obj.findDuplicate(arr);
    obj.OptimalFindDuplicate(arr);

    return 0;
}