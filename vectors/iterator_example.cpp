#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Iterate through the vector using the iterator
    cout << "Elements in the vector: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";  // Dereference the iterator to access the value
    }
    cout << endl;

    // Modify elements using the iterator
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it += 5;  // Increment each element by 5
    }

    // // Output the modified vector
    cout << "Modified elements in the vector: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}