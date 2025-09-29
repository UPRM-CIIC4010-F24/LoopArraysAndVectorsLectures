#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Before:" << endl;
    for (int num : numbers) {
        cout << "Element: " << num << endl;
    }
    cout << "Being modified:" << endl;
    // for (int &num : numbers) {
    //     num += 2;
    //     cout << "Element: " << num << endl; 
    // }
    for (int i = 0; i < 9; i++) {
        numbers[i] += 2;
        cout << "Element: " << numbers[i] << endl;
    }
    cout << "After:" << endl;
    for (int num : numbers) {
        cout << "Element: " << num << endl;
    }
    


    return 0;
}