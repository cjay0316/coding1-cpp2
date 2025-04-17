//Christian Barnett
//Coding 1
//12 Classes Assignment

#include<iostream>
#include<string>

using namespace std;

class human {
    public:
    string name;
    int health = 10;
    int damage = 4;

    human(string givenName, int givenHealth, int givenBaseDamage) {
        name = givenName;
        health = givenHealth;
        damage = givenBaseDamage;
    }

    void sayHello() {
        cout << name << endl;
    }

    void setHealth(int byAmount) {
        health = byAmount; //? maybe 
        health = health - damage;
        if(health > 0) {
            cout << "Youre health is now " << health << endl;
        }
        else if(health < 0) {
            cout << "You died! \n";
        }
    }

     int getHealth() {
        return health;
    }

    void setDamage(int givenDamage) {
        damage = damage + givenDamage;
    }

    int getDamge() {
        return damage;
    }

};

int main() {
    
}