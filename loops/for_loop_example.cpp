#include <iostream>
using namespace std;

int main() {
    int y = 10;
    for (int i = 100; i > 0 && y % 3 != 0; i/=2, y--) {
        cout << "Iteration: " << i << endl;
        cout << "Y: " << y << endl;

    }
    return 0;
}