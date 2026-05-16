#include "location.h"
#include <iostream>

Location:: Location() {
    this->locationText = "placeholder";
}

Location::Location(string setlocationText){
    this->locationText = setlocationText;
    damageAmt = 0;
}

Location::Location(string setlocationText, int damageAmount){
    this->locationText = setlocationText;
    this->damageAmt = damageAmount;
}

void Location::updateText(string text) {
            locationText = text;
        }

void Location::printLocationText(){
    cout << locationText << endl;
}


int Location::getDamageAmt(){
    return this-> damageAmt;
}

string Location::getLocationText(){
    return this->locationText;
}
