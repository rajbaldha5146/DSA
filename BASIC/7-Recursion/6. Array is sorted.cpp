#include <iostream>
using namespace std;

bool isSorted(int *arr, int size) {
    // base case
    if (size == 0 || size == 1) {
        return true;
    }

    // check first pair
    if (arr[0] > arr[1]) {
        return false;
    }

    // recursive call for remaining part
    return isSorted(arr + 1, size - 1);
}

int main() {
    int arr[5] = {2, 10, 9, 9, 9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
