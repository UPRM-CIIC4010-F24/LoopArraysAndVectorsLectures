#include <iostream>
using namespace std;

int main() {
    // Counter
    int count = 15;
    // Acumulator, this value is used to acumulate
    // values in the loop
    int sum = 0;
    
    while (count > 0 ) {
        cout << "Count is: " << count-- << endl;
        cout << "Sum is: " << sum << endl;

        sum += count;
    }
    cout << "Final sum: " << sum << endl;
    cout << "I'm out!" << endl;
    return 0;
}