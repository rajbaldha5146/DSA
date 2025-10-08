#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotateMatrix(vector<vector<int>> &mat)
    {
        int rows = mat.size();
        int cols = mat[0].size();

        // Step 1: Reverse the entire matrix (top <-> bottom)
        reverse(mat.begin(), mat.end());

        // Step 2: Reverse each row (left <-> right)
        for (int i = 0; i < rows; i++)
        {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
};

int main()
{
    // Example input
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    Solution obj;
    obj.rotateMatrix(mat);

    // Print rotated matrix
    cout << "Matrix after 180-degree rotation:\n";
    for (auto &row : mat)
    {
        for (auto &val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
