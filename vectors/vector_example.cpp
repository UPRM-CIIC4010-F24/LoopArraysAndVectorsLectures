#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};

    // Adding elements to the vector
    numbers.push_back(40);
    numbers.push_back(50);

    cout << "Vector size: " << numbers.size() << endl;

    return 0;
}