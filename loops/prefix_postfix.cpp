#include <iostream>
using namespace std;

void print_array_content(int arr[]) {
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void prefix_exmaple() {
    int arr[] = {1, 2, 3, 4, 5};
    int i = 0;
    cout << "i starts at: " << i << endl;
    while (i < 5)
    {
        cout << "Array element: " << arr[++i] << endl;
    }

}
void postfix_exmaple() {
    int arr[] = {1, 2, 3, 4, 5};
    int i = 0;
    cout << "i starts at: " << i << endl;
    while (i < 5)
    {
        cout << "Array element: " << arr[i++] << endl;
    }

}
int main() {
    int arr[] = {2, 4, 6, 8, -1};  // -1 is the sentinel value
    int i = 0;

    while (arr[i] != -1) {
        cout << "Array element: " << arr[i] << endl;
        i++;
    }

    return 0;
}