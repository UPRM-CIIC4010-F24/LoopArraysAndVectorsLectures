#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5 ; i++) {
        cout << "Outer loop: " << i << endl;
        for(int j = 0; j < 5; j++) {
            // if(j == 2)
            //     continue;
            cout << "Inner loop: " << j << endl;

        }
        cout << "At end of outer loop " << endl;
    }
    return 0;
}