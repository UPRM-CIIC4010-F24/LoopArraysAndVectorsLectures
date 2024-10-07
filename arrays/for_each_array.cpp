#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4 , 5, 6, 7, 8, 9};


    for (int num : numbers) {
        cout << "Element: " << num << endl;
    }
    for (int i = 0; i < 9; i++) {
        numbers[i] *= 2;
        cout << "Array element: " << numbers[i] << endl;
    }

    return 0;
}