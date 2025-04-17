//04-10-25
//Strings Again

#include<iostream>
#include<string>

using namespace std;

int main() {
    //Strings are objects
    //Atomic variable types
    bool playAgain = true;
    float pi = 4.1415;
    int playerAge = 24;
    char ynInput = 'y';

    string playerName = "Brian";

    //Strings are an array of characters
    cout << "Here is the first letter of the player's name is: " << playerName[0] << ". \n";
    cout << "There are " << playerName.size() << " characters in playerName. \n";
    cout << "Lets erase the first letter of playerName. \n";
    playerName.erase(3);
    cout << "playerName: " << playerName << ". \n";

    playerName += "!!!";
    cout << "playerName: " << playerName << ". \n";

    //Using a collection initializer to create an array of sstrings with 5 iems in it
    string inventory[] = {"Master Sword","Hylien Shield", "Deku Nut", "Bomb", "Hookshot" };
    const int Max_Inventory_size = 5;

   cout << "Here are your items:\n\n";
   int counter = 0;
   while(counter < Max_Inventory_size) {
    cout << inventory[counter] << "\n";
    counter++;
   }

   string phrase = "Hello starshine, the earth says hello! \n";
   cout << "The word earth starts at character " << phrase.find("earth") << ". \n";
   
   cout << "Searching for 'banana' in the phrase \n";

   //string.find() returns a number. if it returns the special number "string::npos"
   //that means that the word we were looking for is NOT in the string
   if(phrase.find("banana") == string::npos) {
    cout << "We did not find the word in the phrase! \n";
   }

    cout << "What item would you like to use? \n";
    string input;
    getline(cin, input);

    counter = 0;
    while(counter < Max_Inventory_size) {
        //0 means FALSE and any other number means TRUE
        if(inventory[counter] == input) {
            cout << "We use the " << inventory[counter] << ". \n";
            inventory[counter].erase();
            break; //Breaks out of the loop
        }
        if(counter + 1 == Max_Inventory_size) {
            cout << "Item not found. \n";
        }

        counter ++;
    }

    cout << "Here are your updated items:\n\n";
     counter = 0; //Reset counter to 0
     while(counter < Max_Inventory_size) {
        if(inventory[counter] == "") {
        counter++;
        continue;
     }
        cout << inventory[counter] << endl;
        counter++;
   }

    return 0;
}