#include <iostream>
#include <vector>
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
Person findMinAge(vector<Person>& persons) {
    int minIndex = 0;
    for (int i = 1; i < persons.size(); i++) {
        if (persons[i].age < persons[minIndex].age) {
            minIndex = i;
        }
    }
    return persons[minIndex];
}

// Function to find the person with the maximum age
Person findMaxAge(vector<Person>& persons) {
    int maxIndex = 0;
    for (int i = 1; i < persons.size(); i++) {
        if (persons[i].age > persons[maxIndex].age) {
            maxIndex = i;
        }
    }
    return persons[maxIndex];
}

// Function to calculate the average age
float calculateAverageAge(vector<Person>& persons) {
    int sum = 0;
    for (int i = 0; i < persons.size(); i++) {
        sum += persons[i].age;
    }
    return static_cast<float>(sum) / persons.size();
}

// Function to find a person by name
Person* findPersonByName(vector<Person>& persons, const string& name) {
    for (int i = 0; i < persons.size(); i++) {
        if (persons[i].name == name) {
            return &persons[i];  // Return the pointer to the found person
        }
    }
    return nullptr;  // Return null if not found
}

int main() {
    // Vector of Person objects
    vector<Person> persons = {
        Person("Alice", 25),
        Person("Bob", 30),
        Person("Charlie", 22),
        Person("Diana", 28)
    };

    // Find the person with the minimum age
    Person minAgePerson = findMinAge(persons);
    cout << "Person with minimum age: " << minAgePerson.name << " (" << minAgePerson.age << ")" << endl;

    // Find the person with the maximum age
    Person maxAgePerson = findMaxAge(persons);
    cout << "Person with maximum age: " << maxAgePerson.name << " (" << maxAgePerson.age << ")" << endl;

    // Calculate and display the average age
    float averageAge = calculateAverageAge(persons);
    cout << "Average age: " << averageAge << endl;

    // Find a person by name
    string searchName = "Charlie";
    Person* foundPerson = findPersonByName(persons, searchName);
    if (foundPerson != nullptr) {
        cout << "Found person: " << foundPerson->name << " (" << foundPerson->age << ")" << endl;
    } else {
        cout << "Person not found!" << endl;
    }

    return 0;
}