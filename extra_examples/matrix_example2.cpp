#include<string>
#include<iostream>

// For easier searching
enum Department {ENGINEERING, MATH, CHEMISTRY, PHYSICS, ENGLISH, SPANISH};

using namespace std;
int main() {
    // The order of the names is the same as the enums appear (important detail)
    string department_names[] = {"Engineering", "Math", "Chemistry", "Physics", "English", "Spanish"};
    /* 
    Assume the order of the info is the same as the enums appear
    Assume the format is as follows {budget in millions, # students, graduation rate}

    This matrix is parallel to the department name array
    */
    float budget[6][3] {{10.8f, 16005.0f, 0.45f}, 
                        {5.98f, 4087.0f, 0.50f}, 
                        {6.56f, 7032.0f, 0.78f}, 
                        {9.23f, 8763.0f, 0.65f}, 
                        {2.78f, 2345.0f, 0.89f}, 
                        {3.0f, 4543.0f, 0.87f}};

    // Calculate the total budget of the semester


    // Find the DEPARTMENT with the highest budget


    // Find the department with the highest graduation rate

}