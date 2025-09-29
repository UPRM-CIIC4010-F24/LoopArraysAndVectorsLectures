#include <iostream>
using namespace std;

/*
    This program uses a while loop to do a sum
*/
int main() {
    // Counter
    int count = 5;
    // Acumulator, this value is used to acumulate
    // values in the loop
    int sum = 10;
    
    while (count > 0 ) {
        cout << "Count is: " << count-- << endl;
        cout << "Sum is: " << sum << endl;

        sum += count;
    }
    cout << "Final sum: " << sum << endl;
    cout << "I'm out!" << endl;

    int s=0;
    for(int i = 0 ; i < 10; i++) {
        s += i;// s = s+i;
    }
    cout << s;
    return 0;
}