//04/10/25
//Structures
//... are identical to classes in c++ (except public by default)
//... we can talk about POD (Plain Old Data) structs - they dont have functions

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//enum = enumerator
enum enemyType {GRUNT, MINIBOSS, BOSS};

//POD structures
//A custom variable type
struct enemy {
//These data numbers are public by default (we can make them private if we want)
    int health = 10;
    int damage = 4;
    string name = "Enemy";
    enemyType type = GRUNT;
};

struct address {
    string streetName;
    int streetNumber;
    string city;
    string state;
    string stateCode;
    int zipCode;
};

struct employee {
    int Id = 0;
    string name;
    int age;
    //String address
    address addr;   //Structs can hold other structs
    float wage;
};

string addressOneLine(address addr){
    string oneLine;
    oneLine += to_string(addr.streetNumber);
    oneLine += " " + addr.streetName;
    oneLine += ", " + addr.city;
    oneLine += ", " + addr.stateCode;
    oneLine += ", " + to_string(addr.zipCode);

    return oneLine;
}


int main() {
    cout << "Structures! \n";

    enemy brandon;
    brandon.health = 10;
    brandon.damage = 4;
    brandon.name = "Evil Brandon";
    brandon.type = GRUNT;

    cout << "Here's " << brandon.name << "! His health is " << brandon.health << "." << endl;

    enemy tom;
    tom.damage = 6;
    tom.name = "Skinny Tom";

    cout << tom.name << " is attacking " << brandon.name << "!" << endl;
    brandon.health -= tom.damage;

    if (brandon.health < 1) {
        cout << brandon.name << " has been killed!" << endl;
    }
    else {
        cout << brandon.name << " has " << brandon.health << " health left!" << endl; 
    }

    vector<enemy> enemies;
    enemies.push_back(brandon);
    enemies.push_back(tom);

    cout << "Status of all enemies: " << endl;
    for (int i = 0; i < enemies.size(); i++) {
        cout << enemies[i].name << " has " << enemies[i].health << " health." << endl;
        cout << "Their damage is " << enemies[i].damage << " and their type is ";
         switch(enemies[i].type) {
            case GRUNT:
                cout << "grunt";
                break;
            case MINIBOSS:
                cout << "Miniboss";
                break;
            case BOSS:
                cout << "Boss";
                break;
            default:
                cout << "Unknown";
                break;
         }
         cout << ".\n";
    }

    employee brian;
    brian.Id = 2456;
    brian.name = "Brian Foster";
    brian.age = 35;
    brian.wage = 7.25;
    brian.addr.streetNumber = 1234;
    brian.addr.streetName = "Main Street";
    brian.addr.city = "Wichita";
    brian.addr.stateCode = "KS";
    brian.addr.zipCode = 12345;

    cout << brian.name << " lives at " << addressOneLine(brian.addr) << "." << endl;

    

    return 0;
}