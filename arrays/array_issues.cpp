#include <iostream>
using namespace std;

// Function to resize an array (returns a new array with a different size)
int* resizeArray(int* arr, int oldSize, int newSize) {
    // Create a new array of the desired size
    int* newArr = new int[newSize];
    
    // Copy the elements from the old array to the new array (up to the smaller size)
    for (int i = 0; i < (oldSize < newSize ? oldSize : newSize); i++) {
        newArr[i] = arr[i];
    }

    // If new array is larger, initialize the remaining elements to 0
    for (int i = oldSize; i < newSize; i++) {
        newArr[i] = 0;
    }

    // Delete the old array (since memory was dynamically allocated)
    delete[] arr;

    // Return the new array
    return newArr;
}

// Function to shift array elements by one position (left or right)
void shiftArray(int* arr, int size, bool shiftRight) {
    if (shiftRight) {
        // Shift elements to the right
        int last = arr[size - 1];
        for (int i = size - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;  // Place the last element in the first position
    } else {
        // Shift elements to the left
        int first = arr[0];
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = first;  // Place the first element in the last position
    }
}

int main() {
    // Initial array
    int oldSize = 5;
    int* arr = new int[oldSize]{1, 2, 3, 4, 5};

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < oldSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Resizing the array
    int newSize = 7;
    arr = resizeArray(arr, oldSize, newSize);

    // Print the resized array
    cout << "Resized array: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Shift array to the right
    shiftArray(arr, newSize, true);

    // Print array after right shift
    cout << "Array after right shift: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Shift array to the left
    shiftArray(arr, newSize, false);

    // Print array after left shift
    cout << "Array after left shift: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}