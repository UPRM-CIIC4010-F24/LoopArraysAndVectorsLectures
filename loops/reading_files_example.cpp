#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt");  // Open the file
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;  // Output the file's content
        }
        file.close();  // Close the file
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}