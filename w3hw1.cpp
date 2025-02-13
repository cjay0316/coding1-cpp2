// Week3hw1.cpp
// Do while loop
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main () {

// welcome the player
    cout << "Welcome player! \n";

// set up the game
    int health = 10;
    int attack= 0;
    int block = 0;
    int turns = 0;
    string input;

// seed the random number generator
    srand(time(0));

// start the loop 
    
    do {
        cout << "Would you like to go on a ADVENTURE? \n";
        cin >> input; // takes user input.
        if (input == "yes") {
            cout << "Here we go! \n"; // Its paramount you read this in your Super Mario voice.
            break; // breaks out of the loop.
        }
        else if (input == "no") {
            cout << "Thanks for playing! \n";
            break; // breals out of the loop.
        }
        else {
            cout << "Input invalid, please try again. \n"; // If user doesn't type yes or no.
        }
    } while (true);

    // start the encounter
    cout << "You're enter a dark creepy castle in the middle of the night. \n";
    cout << "You hear a noise behind you...\n";
    cout << "Oh no! An enemy has appeared! \n";
    do {
        cout << "The enemy attacks you! \n"; // randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
        attack = rand() % 3;
        block = rand() % 3;

        if (attack > block) {
            cout << "You've been hit! \n"; // otherwise, subtract attack value from health.
            break;
        }
        else if (block >= attack) {
            cout << "You've blocked the attack! \n"; // if block is greater or equal to attack, successful block
            break;
        }
        return 0;
    }
    while (turns <= 0) {
        turns +=1;
        cout << "Number of turns: " << turns << endl;
    }
    

/*
ask the player if they would like to keep adventuring. if they don't, break out of the loop.
keep looping while health is greater than zero and fewer than 4 turns have happened
if health is greater than 0, congratulate player
otherwise, tell the player they're dead. */
}