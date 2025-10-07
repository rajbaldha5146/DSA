#include <iostream>
using namespace std;

class Solution {
public:
    // Recursive function to return nth Fibonacci number
    int fibonacci(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    // Print series up to n terms
    void printSeries(int n) {
        cout << "Fibonacci Series up to " << n << " terms: ";
        for (int i = 0; i < n; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    Solution obj;
    obj.printSeries(n);

    return 0;
}
