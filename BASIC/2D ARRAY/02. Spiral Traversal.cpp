#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // Function to print matrix elements in spiral order
    void printSpiral(vector<vector<int>> &arr)
    {
        int rows = arr.size();
        int cols = arr[0].size();

        int top = 0, bottom = rows - 1;
        int left = 0, right = cols - 1;

        cout << "Spiral Traversal: ";

        // Loop until all elements are printed
        while (top <= bottom && left <= right)
        {
            // Step 1: Traverse top row (left → right)
            for (int i = left; i <= right; i++)
            {
                cout << arr[top][i] << " ";
            }
            top++;

            // Step 2: Traverse right column (top → bottom)
            for (int i = top; i <= bottom; i++)
            {
                cout << arr[i][right] << " ";
            }
            right--;

            // Step 3: Traverse bottom row (right → left)
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    cout << arr[bottom][i] << " ";
                }
                bottom--;
            }

            // Step 4: Traverse left column (bottom → top)
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    cout << arr[i][left] << " ";
                }
                left++;
            }
        }

        cout << endl;
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

    cout << "Enter the elements of the 2D array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nOriginal 2D array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Create object and call function
    Solution s;
    s.printSpiral(arr);

    return 0;
}
