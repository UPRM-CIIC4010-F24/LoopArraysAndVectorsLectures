#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    int i = 0;

    while (i < numbers.size()) {
        cout << "Element: " << numbers[i] << endl;
        i++;
    }

    return 0;
}