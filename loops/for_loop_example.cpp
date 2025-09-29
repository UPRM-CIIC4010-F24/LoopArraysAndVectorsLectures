#include <iostream>
using namespace std;

int practiceLoop(int n=5) {
    for(int i = 0; i < n; i++) {
        if(i == 5) {
            // break;
            return 20;
        }
        cout << i << endl;
    }
    cout << "Out of loop" << endl;
    return -10;
}

void practiceLoop2(int n=5) {
    for(int i = 0; i < n; i++) {
        if(i % 2 != 0) {
            continue;
        }
        cout<< i << endl;
    }
}

int main() {
    int y;
    // int j = 0;
    for( int j = 0; j < 6; j++) {
        cout << "Count down: " << j % 3 << endl;
    }
    // cout << "Final j=" << j << endl;




    // for ( int i = 0, y = 10; i < 10 && y > 1; i+=2, y = y+3) {
    // for ( int i = 0; i < 10; i++) {
    //     if(i == 5)
    //         break;
    //     cout << "Iteration: " << i << endl;
    //     // cout << "Y= " << y << endl;

    // }
    // cout << "Result of function: " << practiceLoop(10);

    // practiceLoop2(20);
    return 0;
}