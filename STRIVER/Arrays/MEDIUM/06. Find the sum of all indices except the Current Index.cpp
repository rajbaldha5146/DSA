#include <iostream>
#include <vector>
using namespace std;

vector<int> sumExceptSelf(vector<int>& arr) {
    int n = arr.size();
    int totalSum = 0;
    
    // Step 1: Calculate total sum
    for (int num : arr) {
        totalSum += num;
    }
    
    // Step 2: Subtract current element
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        result[i] = totalSum - arr[i];
    }
    
    return result;
}

int main() {
    vector<int> arr = {2, 4, 6, 8};
    vector<int> ans = sumExceptSelf(arr);
    
    cout << "Result: ";
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
