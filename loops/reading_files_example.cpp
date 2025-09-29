#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt");  // Open the file
    string line;
    int count = 0;
    if (file.is_open()) {
        while (getline(file, line)) {
            // if(count < 2) {
            //     count++;
            //     continue;
            // }
            cout << line << endl;  // Output the file's content
        }
        file.close();  // Close the file
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}