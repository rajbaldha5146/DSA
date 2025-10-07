#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printDiagonals(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if (m == 0) return;
        int n = matrix[0].size();

        // 1. Start from first row
        for (int col = 0; col < n; col++) {
            int i = 0, j = col;
            while (i < m && j >= 0) {
                cout << matrix[i][j] << " ";
                i++;
                j--;
            }
            cout << endl;
        }

        // 2. Start from first column (excluding first element)
        for (int row = 1; row < m; row++) {
            int i = row, j = n - 1;
            while (i < m && j >= 0) {
                cout << matrix[i][j] << " ";
                i++;
                j--;
            }
            cout << endl;
        }
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution s;

    cout << "Diagonals of the matrix:\n";
    s.printDiagonals(matrix);

    return 0;
}
