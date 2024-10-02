#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Iterating through array
    for (int i = 0; i < 5; i++) {
        cout << "Array element: " << arr[i] << endl;
    }

    // Iterating through vector
    for (int i = 0; i < numbers.size(); i++) {
        cout << "Vector element: " << numbers[i] << endl;
    }

    return 0;
}