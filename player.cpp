#include "player.h"
using namespace std;

void Player::updateHealth(int healthChange){
    if (healthChange < 0) {
        cout << "You took " << healthChange * -1 << " damage." << endl;
    }
    if (healthChange > 0) {
        cout << "You gained " << healthChange << " health." << endl;
    }
    health = health + healthChange;
}

void Player::SetName(string nameChoice){
    name = nameChoice;
}

void Player::addItem(string item) {
    inventory.push_back(item);
}

vector<string> Player::getInventory() {
    return inventory;
}

void Player::PrintPlayerInfo(){
    int i;
    string hearts = "";
    for (i = 0; i < health; i++){
        hearts.append("H ");
    }
    for (i = 3-health; i > 0; --i) {
        hearts.append("X ");
    }
    cout << endl << endl;
    cout << "  PLAYER INFO" << endl;
    cout << "----------------" << endl;
    cout << name << "   |   " << hearts << endl;
    cout << "Items    |    ";
    for (i = 0; i < inventory.size(); ++i) {
        cout << inventory.at(i) << "  ";
    }
    cout << endl;
    cout << "----------------" << endl;
}

string Player::GetName(){
    return name;
}

int Player::GetHealth(){
    return health;
}
