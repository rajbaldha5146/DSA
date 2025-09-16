#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
void countFrequencies(const vector<int> &arr)
{
    unordered_map<int, int> freq;
    // Step 1: Count frequencies
    for (int num : arr)
    {
        freq[num]++;
    }
    // Step 2: Print results
    cout << "Frequencies of elements:\n";
    for (auto pair : freq)
    {
        cout << pair.first << " → " << pair.second << " times" << endl;
    }
}
int main()
{
    // Test Case 1
    vector<int> arr1 = {1, 2, 2, 3, 1, 4, 2};
    countFrequencies(arr1);
    cout << "----\n";
    // Test Case 2
    vector<int> arr2 = {5, 5, 5, 5};
    countFrequencies(arr2);
    return 0;
}
