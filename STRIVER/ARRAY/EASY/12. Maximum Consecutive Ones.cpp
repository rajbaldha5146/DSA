#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n = arr.size(); // store size in variable
        int maxCount = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }

        return maxCount;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int result = obj.findMaxConsecutiveOnes(arr);

    cout << "Maximum consecutive ones: " << result << endl;

    return 0;
}
