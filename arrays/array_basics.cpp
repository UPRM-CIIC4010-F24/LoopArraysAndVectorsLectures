#include <iostream>
using namespace std;

int main() {
    // 1. Initialize an array
    int arr[5] = {1, 2, 3, 4, 5}; 
    
    // 2. Access and print elements
    cout << "First element: " << arr[0] << endl;  // Output: 1
    cout << "Second element: " << arr[1] << endl; // Output: 2
    
    // 3. Modify elements
    arr[2] = 10;  // Changing the third element
    arr[4] = 20;  // Changing the fifth element
    
    // 4. Print modified array
    cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Output: 1 2 10 4 20
    }
    cout << endl;

    // 5. Get the size of the array
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    cout << "The size of the array is: " << sizeOfArray << endl;  // Output: 5

    return 0;
}