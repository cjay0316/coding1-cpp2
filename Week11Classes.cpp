//04/10/25
//Classes, Getters, and Setters
//A string is a class

#include<iostream>
#include<string>
using namespace std;

//Use the class keyword to create a class named "robot"

class robot {
private:
    string name;
    string phrase;
    int charge = 10;
    int maxCharge = 100;
    int minCharge = 0;


public: //Anyone can see this
    robot(string, string, int);
    robot();
    void sayHello();

    //Setters and Getters give access to private variable
    //Through whatever tests we want to write

    // SetCharge clamps charge to a range of 0 - 100 (inclusive)
    void setCharge(int givenCharge) {
        if(givenCharge < 0) {
            charge = 0;
        } else if (charge > 100) {
            charge = 100;
        }
    }
    void changeCharge(int by = -1) {
        charge += by;
        setCharge(charge); //For clamping the charge
    }
    //Getters will always have a return type
    int getCharge() {
        return charge;
    }
    void setName(string givenName) {
        if (givenName.size() < 2) {
            cout << "Name is too short! \n";
            return; //Returing nothing out of a void function to end the function
        }
        else if (givenName.size() > 20) {
            cout << "Name is too long! \n";
            return;
        }
        else {
            name = givenName;
        }
    }
    string getName() {
        return name;
    }
//No need to let people set the phrase
//or hear it. the robot gets to be in charge for when they say it

protected:
};  //Dont forget the ;

    //Conductor (has to be named same as the class and doesnt have a return type)
robot::robot(string givenName, string givenPhrase, int givenCharge) {
    //Assigns this instance's variables to the given values
    name = givenName;
    phrase = givenPhrase;
    charge = givenCharge;

    //Lets us know that this constructor has run
    cout << "A new robot has been constructed! \n";
}

//Overloading the constructor with a default constructor
robot::robot() {
    cout << "using the DEFAULT constructor. \n";
    cout << "Hey programmer Dean, please fix this in the source code. \n";
}
void robot::sayHello(){
    cout << "My name is " << name << " and my charge is " << charge << ". \n";
    cout << phrase << endl;
    changeCharge(); //This task was not very expensive to charge
}


int main() {
    cout << "Classes, yeah? \n";

    robot bobert;
    bobert.setName("Bobert Jr");
    bobert.setCharge(5);

    cout << "Have a look at our new robot! Their name is " << bobert.getName() << ".\n";
    cout << "I am currently charging them, their charge is " << bobert.getCharge() << ".\n";

    bobert.changeCharge(50);
    cout << "Two hours later, Boberts charge is now " << bobert.getCharge() << ".\n";

    robot rob("Roberto", "I can fix anything!", 25);
    cout << 'My new robot is very expensive! He works on my nuclear reactor. \n';
    cout << "They can introduce themselves, watch! \n";
    rob.changeCharge(-200); //Nuclear reactor sapped all the energy
    rob.sayHello();

    return 0;
}