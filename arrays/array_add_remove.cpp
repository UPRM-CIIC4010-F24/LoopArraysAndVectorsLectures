#include<iostream>

using namespace std;


void add_to_arr(int arr1[], int position, int value, int size) {

    for(int i = size - 1; i >= position; i--) {
        arr1[i + 1] = arr1[i];
    }
    arr1[position] = value;  
}
void remove_from_arr(int arr1[], int position, int size) {

    for(int i = position; i > size; i--) {
        arr1[i] = arr1[i+ 1];
    }
    arr1[size - 1] = -1;  
}

void printArray(int values[]) {
    for(int i = 0; i < 10 ; i++) {
        cout << values[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4}; // 1, 2, 3, 4
    printArray(arr);
    add_to_arr(arr, 2, 7, 10);
    printArray(arr);
    return 0;
}