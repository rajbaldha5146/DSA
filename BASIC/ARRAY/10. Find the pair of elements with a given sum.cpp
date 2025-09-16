#include <iostream>
#include <vector>
using namespace std;

class solution
{
    public:
        void findPairWithSum(vector<int>& arr, int target)
        {
            int count = arr.size();
            bool p = false;

            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if((arr[i]+arr[j]) == target)
                    {
                        p = true;
                        cout << "Pair is : " << "(" << arr[i] << " and " << arr[j] << ")" << endl;
                    }
                }
                
            }
            
            if(!p)
            {
                cout << "There no pair which sum is : " << target << endl;
            }
        }

};

int main()
{
    int size;
    int target;

    cout << "Enter the number of Size of arr : " << endl;
    cin >> size;

    // arr = {1,2,3,4,5};
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element" << endl;
        cin >> arr[i];
    }

    cout << "Enter the numbers sum : " << endl;
    cin >> target;

    solution obj;
    obj.findPairWithSum(arr,target);
    
}