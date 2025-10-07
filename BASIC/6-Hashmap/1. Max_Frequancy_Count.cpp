#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

class solution
{
public:
    int FrequencyCount(int *arr, int n)
    {
        unordered_map<int, int> count;
        int maxFreq = 0;
        for (int i = 0; i < n; i++)
        {
            count[arr[i]]++;
            maxFreq = max(maxFreq, count[arr[i]]);
        }
        return maxFreq;
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 1, 1};

    solution obj;
    int ans = obj.FrequencyCount(arr, 5);
    cout << "Maximum Frequency: " << ans << endl;
}