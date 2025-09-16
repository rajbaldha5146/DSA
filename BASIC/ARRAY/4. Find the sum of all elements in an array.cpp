#include <iostream>
#include <vector>
using namespace std;

class solution
{
    public:

    int sum(vector<int> &arr)
    {
        int sum = 0;
        int size = arr.size();

        for (int i = 0; i < size ; i++)
        {
            sum = sum + arr[i];
        }
        return sum;
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
    int ans = obj.sum(arr);

    cout << "Sum of all number is : " << ans << endl;
    
    return 0;
}