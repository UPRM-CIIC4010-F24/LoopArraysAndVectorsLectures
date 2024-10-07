#include <iostream>
using namespace std;

// Function with while loop
void inputWithWhile() {
    int input;
    cout << "Enter a number between 1 and 10: ";
    cin >> input;
    // Check if the input is valid if not continue asking
    while (input < 1 || input > 10) {
        cout << "Enter a number between 1 and 10: ";
        cin >> input;
    }
    cout << "You entered: " << input << endl;
}

// Function with do-while loop
void inputWithDoWhile() {
    int input;
    do {
        cout << "Enter a number between 1 and 10: ";
        cin >> input;
        
    } while (input < 1 || input > 10);
    cout << "You entered: " << input << endl;
}

int main() {
    // inputWithWhile();
    inputWithDoWhile();
    return 0;
}