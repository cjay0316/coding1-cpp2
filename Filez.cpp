#include "Filez.h"
#include "Ship.h"

void writeToFile(string givenString) {
//Open (or create) the file
ofstream file("file.txt", ios::app); //ios::app to append to the end the file
//Early return if file can not open
if(!file.is_open()) {
    cout << "Could not open file! \n";
    return;
}
//Write text to that open file
file << givenString;

//Close the file (which saves it to disk)
file.close();

}

void readFromFile() {
    string fileContents; //This is where we store the text from the file
    //Open the file
    ifstream file("file.txt");
    //Check that its actually open
    if(!file.is_open()) {
        cout << "Could not open the file! \n";
    }
    //cout everything that is in the file
    while(getline(file, fileContents)) {
    cout << fileContents << endl;
    }
    //Close the file
    file.close();
}

void writeShipToFile (ship givenShip) { //Brings over the name of given ship
    cout << "Writing " << givenShip.name << " to file. \n";

    ofstream file ("ship.txt", ios::app);
    
    if (!file.is_open()) {
        cout << "Could not open file! \n";
        return;
    }

    //Can treat file as cout
    file << givenShip.name << endl; //Adds the name which is a string
    file << givenShip.fuel << endl; //Adds the fuel which is a string
    
    if (givenShip.type == FRIGATE) {
        file << "frigate" << endl;
    }
    else if (givenShip.type == FIGHTER) {
        file << "fighter" << endl;
    }
    else if (givenShip.type == FREIGHTER) {
        file << "frieghter" << endl;
    }
    else if (givenShip.type == CRUISER ) {
        file << "cruiser" << endl;
    }
    else {
        file << "unknown" << endl;
    }

  

    file.close();   //Closes file and saves file to disk
}