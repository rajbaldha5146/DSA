#include <bits/stdc++.h>
using namespace std;

int countSubarraysWithSumK(vector<int>& arr, int k) {
    int n = arr.size();   // ✅ maintain size in variable
    unordered_map<int,int> m;  
    
    m[0] = 1;  // ✅ very important: prefix sum 0 occurs once
    int PrefixSum = 0;
    int total = 0;

    for(int i=0; i<n; i++) {
        PrefixSum += arr[i];   // update prefix sum
        
        // ✅ check if (PrefixSum - k) was seen before
        if(m.count(PrefixSum - k)) {
            total += m[PrefixSum - k];
        }

        // store/update current prefix sum
        m[PrefixSum]++;
    }
    return total;
}

int main() {
    vector<int> arr = {1, 2, 3, -2, 5};
    int k = 5;
    cout << "Number of subarrays with sum " << k << " = " 
         << countSubarraysWithSumK(arr, k) << endl;
    return 0;
}
