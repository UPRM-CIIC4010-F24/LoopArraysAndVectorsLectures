#include <iostream>
using namespace std;
void break_cont_loop() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip when i == 5
        }
        if (i == 8) {
            break;  // Exit loop when i == 8
        }

        cout << "i = " << i << endl;
    }
}
bool break_cont_loop(int g) {
    for (int i = 0; i <= 20; i++) {
        if(i == g)
            return true;
        if(i == 15)
            break;

    }
    cout << "I'm here!" << endl;
    return false;
}
int main() {
    cout << boolalpha;
    cout << break_cont_loop(20) << endl;
    return 0;
}