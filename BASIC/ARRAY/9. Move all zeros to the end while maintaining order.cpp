#include <iostream>
#include <vector>
using namespace std;

class solution
{
    public:
        void moveZerosToEnd(vector<int>& arr)
        {
            int count = arr.size();
            int j = 0; // Pointer to place non-zero elements

            // Step 1: Move all non-zero elements to the front
            for (int i = 0; i < count; i++)
            {
                if(arr[i] != 0)
                {
                    arr[j] = arr[i];
                    j++;
                }
            }

            // Step 2: Fill remaining positions with 0
            while( j < count )
            {
                arr[j] = 0;
                j++;
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