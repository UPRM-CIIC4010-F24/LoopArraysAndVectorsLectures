#include <iostream>
#include <string>
using namespace std;

// Define a class for Person
class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

// Function to find the person with the minimum age
Person findMinAge(Person persons[], int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (persons[i].age < persons[minIndex].age) {
            minIndex = i;
        }
    }
    return persons[minIndex];
}

// Function to find the person with the maximum age
Person findMaxAge(Person persons[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (persons[i].age > persons[maxIndex].age) {
            maxIndex = i;
        }
    }
    return persons[maxIndex];
}

// Function to calculate the average age
float calculateAverageAge(Person persons[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += persons[i].age;
    }
    return static_cast<float>(sum) / size;
}

// Function to find a person by name
Person* findPersonByName(Person persons[], int size, string name) {
    for (int i = 0; i < size; i++) {
        if (persons[i].name == name) {
            return &persons[i];  // Return the pointer to the found person
        }
    }
    return nullptr;  // Return null if not found
}

int main() {
    // Array of Person objects
    Person persons[] = {
        Person("Alice", 25),
        Person("Bob", 30),
        Person("Charlie", 22),
        Person("Diana", 28)
    };
    int size = 4;

    // Find min age
    Person minAgePerson = findMinAge(persons, size);
    cout << "Person with minimum age: " << minAgePerson.name << " (" << minAgePerson.age << ")" << endl;

    // Find max age
    Person maxAgePerson = findMaxAge(persons, size);
    cout << "Person with maximum age: " << maxAgePerson.name << " (" << maxAgePerson.age << ")" << endl;

    // Calculate average age
    float averageAge = calculateAverageAge(persons, size);
    cout << "Average age: " << averageAge << endl;

    // Find person by name
    string searchName = "Charlie";
    Person* foundPerson = findPersonByName(persons, size, searchName);
    if (foundPerson != nullptr) {
        cout << "Found person: " << foundPerson->name << " (" << foundPerson->age << ")" << endl;
    } else {
        cout << "Person not found!" << endl;
    }

    return 0;
}