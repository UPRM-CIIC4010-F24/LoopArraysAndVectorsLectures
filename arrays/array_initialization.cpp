#include <iostream>
using namespace std;

int main() {
    // Example 1: Basic Initialization with Specific Values
    int arr1[5] = {1, 2, 3, 4, 5};
    cout << "Basic Initialization with Specific Values\nArray 1: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " "; // Output: 1 2 3 4 5
    }
    cout << endl;

    // Example 2: Partial Initialization (Remaining Elements are Zero)
    int arr2[5] = {1, 2};  // The rest will be zero-initialized
    cout << "Partial Initialization (Remaining Elements are Zero)\nArray 2: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " "; // Output: 1 2 0 0 0
    }
    cout << endl;

    // Example 3: Initialization with All Elements Set to Zero
    int arr3[5] = {0};  // All elements are initialized to 0
    cout << "Initialization with All Elements Set to Zero\nArray 3: ";
    for (int i = 0; i < 5; i++) {
        cout << arr3[i] << " "; // Output: 0 0 0 0 0
    }
    cout << endl;

    // Example 4: Implicit Size from Initialization List
    int arr4[] = {10, 20, 30, 40, 50};  // Size automatically determined by the number of elements
    int sizeOfArr4 = sizeof(arr4) / sizeof(arr4[0]);
    cout << "Implicit Size from Initialization List\nArray 4: ";
    for (int i = 0; i < sizeOfArr4; i++) {
        cout << arr4[i] << " "; // Output: 10 20 30 40 50
    }
    cout << endl;
    return 0;
}