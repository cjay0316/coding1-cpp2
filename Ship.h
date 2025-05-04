#pragma once
#include <iostream>
#include <string>
using namespace std;

//This specifies the different types of ships
enum shipType {FIGHTER, FRIGATE, FREIGHTER , CRUISER};

class ship {
public:
    string name;
    int fuel;
    shipType type;

    ship(); //The consturctor
    void status(); //Equivalent to sayHello()

};
