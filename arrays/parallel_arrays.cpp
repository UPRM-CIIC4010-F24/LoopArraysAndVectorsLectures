#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

// Define a Student class
class Student {
public:
    string name;
    int grade;

    // Constructor
    Student(string n, int g) {
        name = n;
        grade = g;
    }
};

void processing_using_class() {
        // Array of student objects
    Student students[] = {Student("Alice", 90), Student("Bob", 85), Student("Charlie", 88)};
    int numStudents = 3;

    // Output student details
    for (int i = 0; i < numStudents; i++) {
        cout << "Student: " << students[i].name << ", Grade: " << students[i].grade << endl;
    }
}
void processing_using_parallel_arrays() {
    // Parallel arrays to store student names and grades
    string studentNames[] = {"Alice", "Bob", "Charlie"};
    int studentGrades[] = {90, 85, 88};

    int numStudents = 3;

    // Output student details
    for (int i = 0; i < numStudents; i++) {
        cout << "Student: " << studentNames[i] << ", Grade: " << studentGrades[i] << endl;
    }
}
int main() {

    processing_using_parallel_arrays();
    processing_using_class();
    return 0;
}