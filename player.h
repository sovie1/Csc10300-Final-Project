/* -----
The include guard was written with the aid of ChatGPT;
when asked how to resolve the redefinition error
the generated text helped me write the following code:
accessed: May 2026
 -------- */

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Player{
    public:
        void updateHealth(int healthChange);
        void SetName(string nameChoice);
        void PrintPlayerInfo();
        string GetName();
        int GetHealth();
        void addItem(string item);
        vector<string> getInventory();
        Player(){
            health = 3;
            name = "player";
        };

    private:
        vector<string> inventory;
        int health;
        string name;
};

#endif // PLAYER_H
