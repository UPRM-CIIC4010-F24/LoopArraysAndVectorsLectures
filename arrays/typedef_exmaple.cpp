#include <iostream>
using namespace std;

// Using typedef to define a new name for an existing type
typedef unsigned MyInt;
typedef float MyFloat;

// Using typedef to define an array type
typedef int IntArray[5];

int main() {
    // Using typedef for types
    MyInt a = 10;
    MyFloat b = 3.14f;

    cout << "MyInt value: " << a << endl;    // Output: 10
    cout << "MyFloat value: " << b << endl;  // Output: 3.14

    // Using typedef for arrays
    IntArray arr = {1, 2, 3, 4, 5};  // Equivalent to int arr[5] = {1, 2, 3, 4, 5};

    // Accessing and printing array elements
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << arr[i] << endl; // Output: 1 2 3 4 5
    }

    return 0;
}