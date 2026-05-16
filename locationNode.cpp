
#include "locationNode.h"

LocationNode::LocationNode(Location locationInput, LocationNode* branch1, LocationNode* branch2, bool isEnding) {
    this -> location = locationInput;
    this -> location1 = branch1;
    this->location2 = branch2;
    this->isEnding = isEnding;
}

Location LocationNode::GetThisLocation(){
    return this->location;
}

void LocationNode::SetNextLocation(LocationNode* nextLocationPointer){
    this->nextLocation = nextLocationPointer;
}

LocationNode* LocationNode::GetLocation1(){
    return location1;
}

LocationNode* LocationNode::GetLocation2(){
    return location2;
}

LocationNode* LocationNode::GetNextLocation(){
    return nextLocation;
}

bool LocationNode::checkIfEnding(){
    return this->isEnding;
}

void LocationNode::updateWest(LocationNode* update) {
    this->location1 = update;
}

void LocationNode::updateEast(LocationNode* update) {
    this->location2 = update;
}

void LocationNode::updateText(string text) {
    this->location.updateText(text);
}
