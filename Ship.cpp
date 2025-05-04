#include "Ship.h"

//Define the constructor
ship::ship() {
    name = "SS Minnow";
    fuel = 50;
    type = FRIGATE;
};

void ship::status() {
    cout << "The good ship " << name << " has " << fuel << ". \n";
    cout << "The ship type is: ";

    switch(type) {
        case FRIGATE: cout << "frigate. \n";
            break;
        case FIGHTER: cout << "fighter. \n";
            break;
        case FREIGHTER: cout << "freighter. \n";
            break;
        case CRUISER: cout << "cruiser. \n";
            break;
        default: cout << "unknown. \n";
            break;

    }
};