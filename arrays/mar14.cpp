#include<iostream>

using namespace std;
double getDouble(int e) {
    return 2*e;
}
int main() {
    int arr[10] = {1, 2, 3, 4, 5, -1};

    int size = sizeof(arr)/sizeof(int);

    for(int i =0; i < size && arr[i] != -1; i++) {
        cout << "Before: " << arr[i] << " ";
        cout << "After: "<< getDouble(arr[i]) << endl;
    }
}