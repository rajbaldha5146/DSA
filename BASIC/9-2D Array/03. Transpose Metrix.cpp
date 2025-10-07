#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to print transpose of a matrix
    vector<vector<int>> transposeMatrix(vector<vector<int>> &arr)
    {
        int rows = arr.size();
        int cols = arr[0].size();

        // Fill transpose
        for (int i = 0; i < rows; i++)
        {
            for (int j = i+1; j < cols; j++)
            {
                swap(arr[j][i], arr[i][j]);
            }
        }

        return arr;
    }

    // Helper function to print matrix
    void printMatrix(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        for (int i = 0; i < rows; i++)
        {
            int cols = matrix[i].size();
            for (int j = 0; j < cols; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    Solution s;
    vector<vector<int>> transposed = s.transposeMatrix(arr);

    cout << "\nTranspose of Matrix:\n";
    s.printMatrix(transposed);

    return 0;
}
