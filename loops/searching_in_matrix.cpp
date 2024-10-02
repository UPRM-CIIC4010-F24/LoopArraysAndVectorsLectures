#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 5;
    bool found = false;

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == target) {
                cout << "Found " << target << " at position (" << i << ", " << j << ")" << endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        cout << target << " not found in the matrix." << endl;
    }

    return 0;
}