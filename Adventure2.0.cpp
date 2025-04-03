//Adventure 2.0 Assignment
//Christian Barnett

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

const bool debug = false;

int health = 30;    //Players health
int totalTreasure = 0;  //Players treasure

void Story() {  //Story function
    cout << "You wake up...\n";
    cout << "You have " << health << " health." << endl;
}

bool askYesNo(string question = "yes or no?") {    //Question function
    string input;                       //Store player input

    do {
        cout << question << endl;
        getline(cin, input); //Get players input

        if(input == "yes") {
            cout << "Let's go adventuring! \n";
            return true;    //Because the function is a bool
        }
        else if (input == "no") {
            cout << "Returning home! You have " << totalTreasure << " treasure!" << endl;
            return false;   //Because the function is a bool
        }
        else {
            cout << "I did not understand. Please enter 'yes' or 'no'. \n"; //default statement
        }

    }
    while(true);
}

int rollDie(int sides = 6) {    //Dice rolling function
    return rand() % sides + 1;
}

void adventure() {  //Adventure function
    int treasure = rollDie() * 10;
    int playerBlock = rollDie();
    int enemyAttack = rollDie();
    if (enemyAttack > playerBlock) {
        health = health - enemyAttack;  //Updates players health based off of enemy attack
        totalTreasure = totalTreasure + treasure;   //Updates players treasure after each encounter (ASK ABOUT THIS ONE!)
        cout << "Your health is now: " << health << " and you have earned " << totalTreasure << "." << endl;
    }
    else {
        cout << "You successfully blocked! \n";
        cout << "You lose 1 HP and gain " << treasure << " treasure." << endl;
        totalTreasure = totalTreasure + treasure;   //Updates players treasure after each encounter
        health = health - 1;    //Updates players health after a successfull block
        cout << "Your health is now " << health << " and you have " << totalTreasure << " treasure." << endl;
    }
}

void sayEnding() {  //End game function
    cout << "You have died. Game Over. \n";
    cout << "You lost " << totalTreasure << " treasure!" << endl;
}



int main() {

    srand(time(0));     //seed random number generator

     Story();

    while (health > 0) {    //Keeps the game going while players health is greater than 0
        if(askYesNo ("Would you like to go adventuring? yes or no")) { 
            adventure();
        }
        else {
            break;
        }
    }
     sayEnding();   //Outside the if/else loop

    return 0;
}