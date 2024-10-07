#include <iostream>
using namespace std;

int main() {
    for (int i = 15;  ; i--) {
        if(i == 10)
            break;
        cout << "Iteration: " << i << endl;

    }
    return 0;
}