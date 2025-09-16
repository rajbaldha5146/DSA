#include <iostream>
using namespace std;

int linearSearch(int *arr, int size, int key, int index = 0) {
    // base case: array exhausted
    if (size == 0) {
        return -1;
    }

    // check first element
    if (arr[0] == key) {
        return index;  // return current index
    }

    // recursive call for remaining array
    return linearSearch(arr + 1, size - 1, key, index + 1);
}

int main() {
    int arr[6] = {3, 7, 9, 2, 5, 10};
    int size = 6;

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    } else {
        cout << "Element " << key << " not found" << endl;
    }

    return 0;
}
