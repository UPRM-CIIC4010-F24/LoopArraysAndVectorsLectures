#include <iostream>
using namespace std;

int main() {

    // This will be a counter
    int count = 15;
    
    while (count > 0 ) {
        cout << "Count is: " << count << endl;
        // Counter is updated so that at some point
        // It reaches the stop condition.
        count--;
    }
    cout << "I'm out!" << endl;
    return 0;
}


