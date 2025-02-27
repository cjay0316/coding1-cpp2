// Christian Barnett
// FavGames Assignment

#include<iostream>
#include<string>

using namespace std;

int main() {
    // do {
    string favGame[5]; // creates array of users 5 favorite games
    string input;
    getline (cin, input);

    cout << "List your 5 favorite games. \n";
    cout << "Type 'add, 'edit', 'remove', or 'show' to add, edit, change, or show the list. \n";
    
    if (input == "add") { // takes user input to add games to favGame array
        for (int i; i < 5; i++) {
        cout << "Favorite game # " << i+1 << endl; // shows user what favorite game # theyre on
        getline (cin, input); // takes user input for favGame array. im trying to take all 5 inputs but its only letting me take 1
        input = favGame[i]; // trying to put user input into the array
        }
    }
    else if (input == "edit") { // takes user input to edit their list 
        cout << "Which game would you like to edit? \n";
        for (int i; i < 5; i++) // trying to bring up a game they want to edit
        if (favGame[i] == input) {
            cout << "Edit  favorite game: " << favGame[i];
        }
    }
    else if (input == "remove") { // takes user input to remove games from their list
        cout << "Which game would you like to remove? \n"; // trying to remove game from list
        for (int i; i < 5; i ++) {
        if (input == favGame[i]) {
            cout << "I've found your favorite game: " << favGame[i] << endl;
            }
        }
    }
    else if (input == "show") { // takes user input to print their list on screen
        for (int i; i < 5; i++) {
            cout << "Here are your 5 favorite games: " << favGame[i] << endl; // prints the 5 favorite games on screen
        }
    }
    else {
        cout << "I didn't understand the request.\n"; // default message
        }
    // } while (i < 5)
}
