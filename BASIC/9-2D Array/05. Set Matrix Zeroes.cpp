#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    
    void setZeroes(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> temp = mat;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (temp[i][j] == 0)
                {
                   for( int row = 0; row < n; row++)
                   {
                    mat[row][j] = 0;
                   }
                   for( int col = 0; col < m; col++)
                   {
                    mat[i][col] = 0;
                   }
                }
            }
        }
    }

    // Utility to print matrix
    void printMatrix(vector<vector<int>> &matrix)
    {
        for (auto &row : matrix)
        {
            for (auto val : row)
                cout << val << " ";
            cout << endl;
        }
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    Solution s;
    cout << "Original Matrix:\n";
    s.printMatrix(matrix);

    s.setZeroes(matrix);

    cout << "\nMatrix After Setting Zeroes:\n";
    s.printMatrix(matrix);

    return 0;
}
