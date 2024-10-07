#include <iostream>
#include <vector>
using namespace std;

int main() {
    // A Matrix is a 2D structure
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // Value we want to find
    int target = 5;
    // Flag to see if the value was found
    bool found = false;

    /* 
        When working with 2D structures we have 2 indexes
            matrix[row][col]

        One represents the row and the other the column (col).
        The order in which we access these indexes matters.

        The first index is for the row. 
            matrix[row]
        A row is a 1D vector when we access the second index we 
        are essentially are accessing an index in the 1D vector.

        EXAMPLE:
        Say we have this matrix:

        [[1, 2, 3, 4, 5],
         [6, 7, 8, 9, 10],
         [11, 12, 13, 14, 15]]

         If we call matrix[1], we call accessing this
         row: [6, 7, 8, 9, 10]
         Then calling matrix[1][3] returns 9.
    
    */

   // Accessing rows
   // The total number of rows is given by the size of the matrix.
    for (int row = 0; row < matrix.size(); row++) {
        // Iterating through the columns
        // The total number of columns is given by the size of the row.
        for (int col = 0; col < matrix[row].size(); col++) {
            if (matrix[row][col] == target) {
                cout << "Found " << target << " at position (" << row << ", " << col << ")" << endl;
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