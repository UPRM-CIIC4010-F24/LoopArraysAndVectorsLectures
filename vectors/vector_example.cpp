#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};

    // Adding elements to the vector
    numbers.push_back(40);
    numbers.push_back(50);
    numbers.push_back(60);
    numbers.insert(numbers.begin() + 3, 120);
    numbers.erase(numbers.begin() + 1);

    for(int val: numbers) {
        cout << val << " ";

    }
    cout << endl;
    cout << "Vector size: " << numbers.size() << endl;

    return 0;
}