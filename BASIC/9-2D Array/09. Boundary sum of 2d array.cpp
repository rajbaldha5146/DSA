#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int boundarySum(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        int sum = 0;

        // First row
        for (int j = 0; j < m; j++)
            sum += mat[0][j];

        // Last row (if more than one row)
        if (n > 1)
            for (int j = 0; j < m; j++)
                sum += mat[n - 1][j];

        // First and last column (excluding corners)
        for (int i = 1; i < n - 1; i++)
        {
            sum += mat[i][0]; // first column
            if (m > 1)
                sum += mat[i][m - 1]; // last column
        }

        return sum;
    }
};

int main()
{
    Solution obj;
    int n, m;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int ans = obj.boundarySum(mat);
    cout << "Boundary sum: " << ans << endl;

    return 0;
}
