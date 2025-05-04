#pragma once //This might break macOS, just remove it

#include<iostream>
#include<fstream>
#include<string>
#include "Ship.h"
using namespace std;

void writeToFile(string givenString);
void readFromFile();
void writeShipToFile(ship givenShip);