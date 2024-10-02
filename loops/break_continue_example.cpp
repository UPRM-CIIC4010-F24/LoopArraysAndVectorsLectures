#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip when i == 5
        }
        if (i == 8) {
            break;  // Exit loop when i == 8
        }
        cout << "i = " << i << endl;
    }

    return 0;
}