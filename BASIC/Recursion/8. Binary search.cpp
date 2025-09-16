#include <iostream>
using namespace std;

int binarySearch(int *arr, int start, int end, int key) {
    // base case: not found
    if (start > end) {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key) {
        return mid;  // found
    }
    else if (arr[mid] > key) {
        // search in left half
        return binarySearch(arr, start, mid - 1, key);
    }
    else {
        // search in right half
        return binarySearch(arr, mid + 1, end, key);
    }
}

int main() {
    int arr[7] = {2, 4, 6, 8, 10, 12, 14};
    int size = 7;

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, 0, size - 1, key);

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    } else {
        cout << "Element " << key << " not found" << endl;
    }

    return 0;
}
