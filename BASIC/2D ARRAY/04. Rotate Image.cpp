#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }

    // Helper to print matrix
    void printMatrix(vector<vector<int>>& matrix) {
        for (auto &row : matrix) {
            for (auto &val : row) cout << val << " ";
            cout << endl;
        }
    }
};

int main() {
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    Solution s;

    cout << "Original Matrix:\n";
    s.printMatrix(matrix);

    s.rotate(matrix);

    cout << "\nRotated Matrix (90° Clockwise):\n";
    s.printMatrix(matrix);

    return 0;
}
