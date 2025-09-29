#include<iostream>

using namespace std;


bool compare_arr(int arr1[], int arr2[], int size) {
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    if(size1 != size2) return false;
    for(int i = 0; i < size; i++) {
        if(arr1[i] != arr2[i])
            return false;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int arr1[] = {1, 2};
    cout << boolalpha;
    cout << compare_arr(arr, arr1, 4);
    return 0;
}