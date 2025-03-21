#include <iostream>
#include <vector>
using namespace std;

void doubleVec(vector<int> &v) {
    for(size_t i = 0; i < v.size(); i++) {
        v[i] = v[i]*2;
    }
}

int main() {
    vector<int> numbers = {10, 20, 30};

    for(int val: numbers) {
        cout << val << " ";

    }
    cout << endl;

    // Adding elements to the vector
    numbers.push_back(40);
    numbers.push_back(50);
    numbers.push_back(60);
    numbers.insert(numbers.begin() + 3, 120);
    numbers.erase(numbers.begin() + 1);
    numbers.pop_back();

    for(int val: numbers) {
        cout << val << " ";

    }
    cout << endl;
    doubleVec(numbers);
    cout << "After doubling" << endl;
    for(int val: numbers) {
        cout << val << " ";

    }
    cout << endl;
    numbers[2] = 349;
    cout << "First position in vector " << numbers[2] << endl;
    cout << endl;
    cout << "Vector size: " << numbers.size() << endl;

    return 0;
}