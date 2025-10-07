#include <iostream>
#include <vector>
using namespace std;

class solution
{
    public:
    
    // Function to print 2D array in waveform
    void printWaveform(vector<vector<int>> &arr)
    {
        int rows = arr.size();
        int cols = arr[0].size();

        cout << "Waveform traversal: ";

        for (int col = 0; col < cols; col++)
        {
            // Even column → top to bottom
            if (col % 2 == 0)
            {
                for (int row = 0; row < rows; row++)
                {
                    cout << arr[row][col] << " ";
                }
            }
            // Odd column → bottom to top
            else
            {
                for (int row = rows - 1; row >= 0; row--)
                {
                    cout << arr[row][col] << " ";
                }
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
    solution obj;
    obj.printWaveform(arr);

    return 0;
}
