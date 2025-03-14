#include <iostream>
using namespace std;

int getMax(int arr[5]){
    int max = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;

}

int getMin(int arr[]) {
    int min = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}


int main() {
    // Size of array must be established
    int arr[5] = {1, 2, 3, 4, 5};
    double avg = 0;
    // Iterate through array
    for (int i = 0; i < 5; i++) {
        arr[i]*=arr[i];

    }
    avg /= 5.0;
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " is: " << arr[i] << endl;
        
    }
    cout << "The average is: " << avg << endl;

    int arr2[9] = {1, 24, 13, 9, 55};
    for(int i : arr2) {
        cout << i << endl;
    }

    cout << "Out of bounds: "<< arr2[12] << endl;

    int arr3[5];
    cout << "The max value is: " << getMax(arr2) << endl;
    cout << "The min value is: " << getMin(arr2) << endl;
    return 0;
}