#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    cout << "Original array: " << endl;
    for (size_t i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    int arr2[10] = {0};

    for(int j =0; j < 5; j++) {
        arr2[j] = arr[j];
    }
    cout << "New larger array: " << endl;
    for (size_t i = 0; i < 10; i++)
    {
        cout << arr2[i] << endl;
    }

    
}