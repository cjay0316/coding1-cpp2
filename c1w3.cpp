// Christian Barnett Coding 1 Spring 2025 Week 3
// Variables, Logic, and Randmness
// To compile;
// g++ varlogic.cpp -o varlogic
// to run;
// ./varlogic
// after each change do up arrow up arrow enter (twice)

#include<iostream> // In Out Stream - Sends text to & from the console.
#include <string> // Allowa us to use string variable.
#include <cstdlib>
#include <ctime>

using namespace std; // So we dont have to type std; alll the time.

// This is where the program starts running.
// Its a function that return an integer.
int main() {

    srand(time(0));
    cout << "Here's a random number for you: " << rand() << endl;
    cout << "Here's a random number for you: " << rand() << endl;
    cout << "Here's a random number for you: " << rand() << endl;
    cout << "Here's a random number for you: " << rand() << endl;

    // Modulous give remainder of long division.

    cout << "/ divided by 2 = " << 7 / 2 << " with a remainder of " << 7 % 2 << endl;

    // 1-10 inclusive could be 1 or 10
    // 1-10 exclusive could not be 1 or 10, but 2-9
    cout << "A random number between 1 and 10 (inclusive): " << (rand() % 10) + 1 << endl; 

    cout << "Here is this week grades for the class: between (50 and 100" << endl;
    int counter = 0;
    // While the test is true keep looping.
    // While (test) { code block }
    while (counter < 10) {
        counter +=1;
        cout << (rand() % 50 ) + 50 << endl;
    }

    cout << "Hello! What is your name? " << endl;
    string input; // Cretae a variable to hold players input.
    cin >> input; // Assign input from console to input variable.
    if (input == "Christian") {
        cout << "What is the password? " << endl;
        cin >> input;
        if (input == "Pizza") { // nested if statement
            cout << "Hello creator! " << endl;
        }
        else {
            cout << "Imposter!!! ALERT ALERT ALERT " << endl;
            return 0; // quits out the program early
        }
    }
    //  The default statement
    else {
        cout << "Hello " << endl;
    }

    cout << "Are you ready to play a game? " << endl;
    // A character is a single character, anything you could type on your keyboard.
    char playerCharInput = 'n';
    // A string is an ordered list of character. you could say its an array of characters.
    string name = "christain";
    int totalTurns = 0;
    do {
        cout << "Press 'y' to keep playing." << endl; // Ask player for inout.
        cin >> playerCharInput; // Get input
        totalTurns += 1; // Explain increment and comined assigment operators.
    } while (playerCharInput == 'y'); // Test the input
    // Todo: use a switch statement (next time)
    cout << "You played for: " << totalTurns << " turns! \n";

    // All code block should be indented
    cout << "\tWelcome to week 3" << endl;
    cout << "We're talking about Variable, Logic, and Randomness today." << endl;
    
    // variables are nicknames for data.
    // creating a variable of the type interger.
    // named "age"
    // with the deeclared values of 28.
    int age = 28;
    int score = 0; // declaring the variable but not the value.

    cout << "Always initialized your variables." << endl;

    // Lets talk about camelCase
    // Capitalize each word after the first word.
    int playerOneFuelAmount = 43;

    // An integer is a whole number between -2 billion to +2 billion.
    int oceanDepth = -234;

    // Floats are floating point numbers, they have a decimal point.
    // They're accurate to 7-digits.
    // Creatinf a constant float named "pi" with the value of "3.1415".
    const float pi = 3.1415f;

    // Doubles are double-precision flaoting point numbers. accurate to 22-digits.
    double someNumberWithDeimalPoints = 3456.78945634;

    // Your task: Send these 4 numbers to the console. The run the program.
    cout << "Player 1's fuel amount is " << playerOneFuelAmount << endl;
    cout << "Ocean depth is " << oceanDepth << endl;
    cout << "Pi is " << pi << endl;
    cout << "Some number with decimal points is " << someNumberWithDeimalPoints << endl;
    
    while (true) {
        cout << "Keep playing \n";
        string input;
        cin >> input;

        if (input == "yes") {
            cout << "Here we go again! \n"; 
        }
        else {
            cout << "Thanks for playing! \n";
            break; // This breaks us out of the loop early.
        }
    }
    // When using random numbers dont forget to:
    // #include <cstdlib>  for rand() and srand()
    // #include <ctime> for time()


} // end of main()