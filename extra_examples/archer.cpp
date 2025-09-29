#include<iostream>
#include<string>
#include<cmath>

using namespace std;

/*
    Class that represents a creature that an archer can catch
    A creature has the following properties:
    - Health of the creature
    - Attack power of the creature
*/
class Creature {
    private:
        double health; // Health of the creature
        double attackPower; // Power of the creatire (the damage it can deal)
    public:
        Creature(double health, double attackPower) {
            this->health = health; 
            this->attackPower = attackPower;
        }
        // Getters for all the properties
        double getHealth() {return this->health;}
        double getAttackPower() {return this->attackPower;}

        // Display the properties of the creature
        void display() {
            cout << "Health: " << health << endl;
            cout << "Attack Power: " << attackPower << endl;
        }
};

/*
    Class that represents an archer
    An archer has the following properties:
    - Health of the archer
    - Attack power of the archer
    - Accuracy of the archer
    - If the archer has a short bow
    - Number of arrows the archer has
    - Number of creatures caught by the archer
    - Number of creatures encountered by the archer
*/
class Archer
{
    private:
        int health; // Health of the archer
        int attackPower; // Power of the archer (the damage it can deal)
        double accuracy; // Accuracy of the archer
        bool hasShortBow; // If the archer has a short bow
        int arrows; // Number of arrows the archer has
        int creaturesCaught; // Number of creatures caught by the archer
        int creaturesEncountered; // Number of creatures encountered by the archer
    public:
        Archer(int health, int attackPower, double accuracy, bool hasShortBow, int arrows) {
            this->health = health;
            this->attackPower = attackPower;
            this->accuracy = accuracy;
            this->hasShortBow = hasShortBow;
            this->arrows = arrows;
            this->creaturesCaught = 0;
            this->creaturesEncountered = 0;
        }
        
        //Getters for all the properties
        int getHealth() {return this->health;}
        int getAttackPower() {return this->attackPower;}
        double getAccuracy() {return this->accuracy;}
        bool getHasShortBow() {return this->hasShortBow;}
        int getArrows() {return this->arrows;}
        int getCreaturesCaught() {return this->creaturesCaught;}
        int getCreaturesEncountered() {return this->creaturesEncountered;}
        
        // Setters for all the properties
        void setHealth(int health) {this->health = health;}
        void setAttackPower(int attackPower) {this->attackPower = attackPower;}
        void setAccuracy(double accuracy) {this->accuracy = accuracy;}
        void setHasShortBow(bool hasShortBow) {this->hasShortBow = hasShortBow;}
        void setArrows(int arrows) {this->arrows = arrows;}
        void setCreaturesCaught(int creaturesCaught) {this->creaturesCaught = creaturesCaught;}
        void setCreaturesEncountered(int creaturesEncountered) {this->creaturesEncountered = creaturesEncountered;}
        
        void display() {
            cout << boolalpha;
            cout << "Archer Properties" << endl;
            cout << "Health: " << health << endl;
            cout << "Attack Power: " << attackPower << endl;
            cout << "Accuracy: " << accuracy << endl;
            cout << "Has Short Bow: " << hasShortBow << endl;
            cout << "Arrows: " << arrows << endl;
            cout << "Creatures Caught: " << creaturesCaught << endl;
            cout << "Creatures Encountered: " << creaturesEncountered << endl;
        }


        // Functions to implement
        Archer();
        Archer(int health, int attack, float accuracy);
        bool catchCreature(Creature &creature, int time);
        void increaseAttackPower(double percentage, int maxPower);
        Archer spawnAssistant();
};

/*
    Default constructor for the Archer class
    The default constructor will set the following properties:
    - Health of the archer: 100
    - Attack power of the archer: 10
    - Accuracy of the archer: 0.8  
    - If the archer has a short bow: true
    - Number of arrows the archer has: 10
    - Number of creatures caught by the archer: 0
    - Number of creatures encountered by the archer: 0
*/
Archer::Archer() {
    this->health = 100;
    this->attackPower = 10;
    this->accuracy = 0.8;
    this->hasShortBow = true;
    this->arrows = 10;
    this->creaturesCaught = 0;
    this->creaturesEncountered = 0;
}

/*
    Constructor for the Archer class
    Implement the parameterized constructor below that initializes the 
    health, attackPower, and accuracy properties with the values given.
    All other values assign the following default properties:
    - If the archer has a short bow: true
    - Number of arrows the archer has: 10
    - Number of creatures caught by the archer: 0
    - Number of creatures encountered by the archer: 0
*/
Archer::Archer(int health, int att, float acc) {

}

/*
 * Returns an archer with the following atributes:
 * - Has 60% of the health the the original
 * - Half the attack power
 * - Has the opposite of the short bow status of the archer (this)
 * - Has half the arrows 
*/
Archer Archer::spawnAssistant() {

}

/******************************************************************
 * Determines if the archer can catch a creature based on the number 
 * of arrows available and the attack power of the archer.
 * 
 * The archer can catch the creature if:
 * - The number of hits needed to defeat the creature is less than or 
 *   equal to the number of arrows the archer has.
 * - The number of hits needed is less that the time limit.
 * 
 * If the archer successfully catches the creature:
 * - The number of creatures caught by the archer increases by 1.
 * - The number of arrows decreases by the number of hits required.
 * 
 * Regardless of the outcome, the number of creatures encountered 
 * by the archer always increases by 1.
 * 
 * Note: When calculating the number of hits needed, always round up 
 * to the nearest integer.
 * 
 * Example:
 * Archer with:
 *     health = 100
 *     arrows = 20
 *     attack power = 10
 * 
 * Creature with:
 *     health = 50
 *     attack power = 5
 * 
 * The archer needs 5 hits to defeat the creature (5 * 10 = 50 damage).
 * 
 * Since 5 <= 20 (arrows available) the archer successfully catches the creature.
 * 
 * @param creature: The creature the archer is trying to catch.
 * @param time: The time limit.
 * @return: True if the archer catches the creature, false otherwise.
 ******************************************************************/
bool Archer::catchCreature(Creature &creature, int time) {

}


/******************************************************************
 * This function increases the attack power of the archer by a given percentage.
 * It cannot exceed the maximum power.
 * 
 * NOTE: Assume percentage will be positive
 * 
 * EXAMPLE: If we have that attackPower = 100 and percentage = 50.
 * This means we have to increase attack power by 50%.
 * Therefore, attackPower becomes 150.
 * 
 * EXAMPLE: If we have that attackPower = 100, maxPower = 130
 * and percentage = 50. This results in attackPower = 130, since
 * 150 exceeds the maxPower stated.
 * 
 * @param percentage: The percentage by which to increase the attack power.
 * @param maxPower: The maximum power value.
 * ******************************************************************/
void Archer::increaseAttackPower(double percentage, int maxPower) {
    
}



/*********
 * Test cases
 *********/
void testDefaultConstructor() {
    // Test 1
    Archer archer;
    cout << boolalpha;
    cout << "Test 1 - Default Constructor" << endl;
    cout << "Expected: Health = 100, Attack Power = 10, Accuracy = 0.8, Has Short Bow = true, Arrows = 10, Creatures Caught = 0, Creatures Encountered = 0" << endl;
    cout << "Actual: Health = " << archer.getHealth() << ", Attack Power = " << archer.getAttackPower() << ", Accuracy = " << archer.getAccuracy() << ", Has Short Bow = " << archer.getHasShortBow() << ", Arrows = " << archer.getArrows() << ", Creatures Caught = " << archer.getCreaturesCaught() << ", Creatures Encountered = " << archer.getCreaturesEncountered() << endl << endl;
}

void testConstructor() {
    // Test 1
    Archer archer = Archer(100, 10, 0.8);
    cout << boolalpha;
    cout << "Test 1 - Default Constructor" << endl;
    cout << "Expected: Health = 100, Attack Power = 10, Accuracy = 0.8, Has Short Bow = true, Arrows = 10, Creatures Caught = 0, Creatures Encountered = 0" << endl;
    cout << "Actual: Health = " << archer.getHealth() << ", Attack Power = " << archer.getAttackPower() << ", Accuracy = " << archer.getAccuracy() << ", Has Short Bow = " << archer.getHasShortBow() << ", Arrows = " << archer.getArrows() << ", Creatures Caught = " << archer.getCreaturesCaught() << ", Creatures Encountered = " << archer.getCreaturesEncountered() << endl << endl;
}


void testCatchCreature2() {
    // Test 1
    Archer archer(100, 10, 0.8, true, 20);
    Creature creature(50, 5);
    archer.catchCreature(creature, 55);
    cout << "Test 1 - Catch Creature" << endl;
    cout << "Expected: Creatures Caught = 1, Arrows = 15, Creatures Encountered = 1" << endl;
    cout << "Actual: Creatures Caught = " << archer.getCreaturesCaught() << ", Arrows = " << archer.getArrows() << ", Creatures Encountered = " << archer.getCreaturesEncountered() << endl << endl;

    // Test 2
    Archer archer2(100, 10, 0.8, true, 5);
    Creature creature2(50, 5);
    archer2.catchCreature(creature2, 50);
    cout << "Test 2 - Catch Creature" << endl;
    cout << "Expected: Creatures Caught = 0, Arrows = 5, Creatures Encountered = 1" << endl;
    cout << "Actual: Creatures Caught = " << archer2.getCreaturesCaught() << ", Arrows = " << archer2.getArrows() << ", Creatures Encountered = " << archer2.getCreaturesEncountered() << endl << endl;

    // Test 3
    Archer archer3(100, 5, 0.8, false, 20);
    Creature creature3(50, 5);
    archer3.catchCreature(creature3, 3);   
    cout << "Test 3 - Catch Creature" << endl;
    cout << "Expected: Creatures Caught = 0, Arrows = 20, Creatures Encountered = 0" << endl;
    cout << "Actual: Creatures Caught = " << archer3.getCreaturesCaught() << ", Arrows = " << archer3.getArrows() << ", Creatures Encountered = " << archer3.getCreaturesEncountered() << endl << endl;
}


void testIncreaseAttackPower() {
    // Test 1
    Archer archer(100, 10, 0.8, true, 20);
    archer.increaseAttackPower(70, 100);
    cout << "Test 1 - Increase Attack Power" << endl;
    cout << "Expected: Attack Power = 17" << endl;
    cout << "Actual: Attack Power = " << archer.getAttackPower() << endl << endl;

    // Test 2
    Archer archer2(100, 10, 0.8, true, 20);
    archer2.increaseAttackPower(70, 15);
    cout << "Test 2 - Increase Attack Power" << endl;
    cout << "Expected: Attack Power = 15" << endl;
    cout << "Actual: Attack Power = " << archer2.getAttackPower() << endl << endl;

    // Test 3
    Archer archer3(100, 10, 0.8, true, 20);
    archer3.increaseAttackPower(100, 300);
    cout << "Test 3 - Increase Attack Power" << endl;
    cout << "Expected: Attack Power = 20" << endl;
    cout << "Actual: Attack Power = " << archer3.getAttackPower() << endl << endl;
}


/*****
 * Main function
 */
int main() {
    string divisor;
    divisor.append(50, '*');
    cout << divisor << endl;
    testDefaultConstructor();
    cout << divisor << endl;
    testConstructor();
    cout << divisor << endl;
    testCatchCreature2();
    cout << divisor << endl;
    testIncreaseAttackPower();
    cout << divisor << endl;
    return 0;
}
