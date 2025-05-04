//Week 14
//04-24-25
//Reading and writing to files

#include "Filez.h" 
#include "Ship.h" //Import the header file, which automatically imports the definitions too

int main() {
    cout << "Let's write some new files! \n";

    readFromFile();

    writeToFile("Did you get the Switch 2 preorder?\n");

    ship minnow;
    minnow.type = CRUISER;
    minnow.status();

    writeShipToFile(minnow);    //Print status

    return 0;
}
/*
Files we will use today:
Main.cpp 
filez.h
filez.__cpp
ship.__h
ship.cpp

the header file just has the #includes and the functions declarations
the source files (.cpp) will have the function definitions
*/