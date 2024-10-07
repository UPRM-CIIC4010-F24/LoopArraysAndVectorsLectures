#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5 ; i++) {
        cout << "Outer loop: " << i << endl;
        for(int j = 0; j < i; j++) {
            cout << "Inner loop: " << j << endl;
        }
    }
    return 0;
}