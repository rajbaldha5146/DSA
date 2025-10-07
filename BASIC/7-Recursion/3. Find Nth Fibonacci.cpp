#include <iostream>
using namespace std;

class Solution {
public:
    int fibonacci(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    Solution obj;
    cout << "Fibonacci number at position " << n << " is: " << obj.fibonacci(n) << endl;

    return 0;
}
