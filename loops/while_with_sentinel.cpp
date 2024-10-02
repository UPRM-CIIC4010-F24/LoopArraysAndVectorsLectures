#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, -1};  // -1 is the sentinel value
    int i = 0;

    while (arr[i] != -1) {
        cout << "Array element: " << arr[i] << endl;
        i++;
    }

    return 0;
}