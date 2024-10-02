#include <iostream>
using namespace std;

int main() {
    // Size of array must be established
    int arr[5] = {1, 2, 3, 4, 5};

    // Iterate through array
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " is: " << arr[i] << endl;
    }

    return 0;
}