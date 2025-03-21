#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define a class Person
class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}  // Constructor

    // Function to display person details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int averageAge(vector<Person> people) {
    int sum = 0;
    for(auto it = people.begin(); it != people.end(); ++it) {
        sum += it->age;
    }
    return sum/people.size();
}
int main() {
    // Create a vector of Person objects
    vector<Person> people = {
        Person("Alice", 25),
        Person("Bob", 30),
        Person("Charlie", 22),
        Person("Dave", 47),
        Person("Ellis", 63)
    };

    // Declare an iterator for the vector of Person objects
    vector<Person>::iterator it;

    // Iterate through the vector using the iterator and display each person's details
    cout << "Displaying person details using iterator:" << endl;
    for (it = people.begin(); it != people.end(); ++it) {
        it->display();  // Use the iterator to call the display function of each Person object
        // Why use ->? it->display() is the same as doing (*it).display()
        // (*it).display();
    }

    // Modify the ages of each person in the vector using the iterator
    cout << "Modifying ages..." << endl;
    for (it = people.begin(); it != people.end(); ++it) {
        it->age += 1;  // Increase the age of each person by 1
    }

    // Display the modified person details
    cout << "Displaying modified person details:" << endl;
    for (it = people.begin(); it != people.end(); ++it) {
        it->display();  // Display the modified details
    }

    cout << "Displaying person details in reverse:" << endl;
    // Display details in reverse
    for(auto it = people.rbegin(); it != people.rend(); ++it) {
        it->display(); 
    }

    cout << "Average age is:" << averageAge(people);
    return 0;
}