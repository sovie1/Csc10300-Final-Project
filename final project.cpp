
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>


#include "location.h"
#include "player.h"
#include "locationNode.h"

using namespace std;


void DecisionPoint(Player& player, LocationNode* currLocation, LocationNode* nextLocation1, LocationNode* nextLocation2) {
    cout << "Choose where to move, type in 'W' for West, 'E' for East, and 'I' to check player info" << endl;
    char playerInput;

    cin >> playerInput;

    if (playerInput == 'W'){
        currLocation->SetNextLocation(nextLocation1);
    }

    else if (playerInput == 'E'){
        currLocation->SetNextLocation(nextLocation2);
    }
    else if (playerInput == 'I'){
        player.PrintPlayerInfo();
        DecisionPoint(player, currLocation, nextLocation1, nextLocation2);
    }
    else {
        cout << "Error, enter in either 'W', or 'E' to move or 'I' to check player info" << endl;
        DecisionPoint(player, currLocation, nextLocation1, nextLocation2);
    }
}

void endingArt(LocationNode* endLocation){
    string endingText = (endLocation->GetThisLocation()).getLocationText();
    if (endingText.substr(endingText.size() - 10) == "Game Over."){
        cout << "   x_x\n  /| |\\\n   | |\n  /   \\" << endl;
    }
    else{
        cout << "   \\(^_^)/\n     |\n    / \\\\" << endl;
    }
}


LocationNode* entrancepointer;
LocationNode* location1Pointer;
LocationNode* location7Pointer;
LocationNode* location14Pointer;


int main(){

    int i;

Location location23("You sit on the rock to wait for the figure. You see the dark figure running out from the trees and realize it was just a friendly hunter. The hunter explains they just wanted to help you get out of the forest. You follow the hunter and find the exit. The End.");
LocationNode* location23Pointer = new LocationNode(location23, nullptr, nullptr, true);

Location location22("You enter the small cave. The cave is very dark, but you can hear a strange noise behind you. You slowly turn around and look up. The Bear living in the cave does not like intruders. Game Over.");
LocationNode* location22Pointer = new LocationNode(location22, nullptr, nullptr, true);

Location location21("You continue on the path and walk west. It is very dark. You trip and fall down a hill. You close your eyes as you are quickly rolling down the hill. Then once you stop rolling, you open your eyes and realize you have escaped the forest. The End.");
LocationNode* location21Pointer = new LocationNode(location21, nullptr, nullptr, true);

Location location20("You follow another stone path. On the west side, the stone path continues. But on the east side you see the path leads to a clearing that has a strange tree with a hole in its side. You cannot see what is inside of it. You feel like with luck, something good might happen but it may also lead to your demise.");
LocationNode* location20Pointer = new LocationNode(location20, nullptr, location14Pointer, false);

Location location19("You walk over to the cabin. As you approach it, a dark figure bursts out through the door. You begin to run. The dark figure chases you to a rocky path near a cliff. Eventually, you find a small cave to hide in on the west. But, you also see a rock to sit on on the east, where you can wait to see what the figure wanted. You can go into the cave on the west, or wait for the figure on the east.");
LocationNode* location19Pointer = new LocationNode(location19, location22Pointer, location23Pointer, false);

Location location18("You walk to the large rocky cliff. The night gets darker, and you can see much less than before. Before it gets too dark, you notice a small cave in the cliff on the east side of the path. You also see that the path continues to the west.");
LocationNode* location18Pointer = new LocationNode(location18, location21Pointer, location22Pointer, false);

Location location17("You walk inside of the large tree. You hit your head on the tree as you enter. You see two holes on the opposite side of the hollow tree. There is a large one that has a worn dirt trail through it on the west, and there is a small hole under some bushes on the other side. Go west to follow the trail, or go east to find your own path under the bushes.", -1);
LocationNode* location17Pointer = new LocationNode(location17, location1Pointer, location7Pointer, false);

Location location16("You follow the footsteps to the wide path. You see a small cabin on the west side of the path. On the other side you see another stone path.");
LocationNode* location16Pointer = new LocationNode(location16, location19Pointer, location20Pointer, false);

Location location15("You walk to the west path without any footsteps. You realize the path is being covered in a heavy fog but there is some bug spray on the floor. Maybe that will be useful on one of the paths. After picking it up, you see a large rocky cliff to the east, and to the west there is a big hollow tree.");
LocationNode* location15Pointer = new LocationNode(location15, location17Pointer, location18Pointer, false);

Location location14("You walk onto the stone path. As you continue down this path you find an empty campsite. You look at the ground and realize someone was there recently. You see a wide path to the east with footsteps, and a small path to the west with none.");
location14Pointer = new LocationNode(location14, location15Pointer, location16Pointer, false);

Location location13("You enter the tent and rest overnight. As the sun rises, you realize that exploring during the night was not a good idea, because now you can clearly see the exit next to the pond. You walk to the exit and leave the forest. The End.");
LocationNode* location13Pointer = new LocationNode(location13, nullptr, nullptr, true);

Location location12("You continue to explore. You move quickly through the forest in the dark. You bump into many trees as you walk, but eventually you walk through them and realize that the forest has ended. You have found the way out. The End.");
LocationNode* location12Pointer = new LocationNode(location12, nullptr, nullptr, true);

Location location11("You follow the Wolf. It says to you \"You made the right decision following me. That Bunny likes to trick people.\" You follow the Wolf through the forest, and eventually it stops and says \"Here is the exit. Have a good night.\" You say goodbye to the Wolf and finally exit the forest. The End.");
LocationNode* location11Pointer = new LocationNode(location11, nullptr, nullptr, true);

Location location10("You follow the Bunny. It brings you to a small area surrounded by bushes. It suddenly stops and says \“Sorry, I lied. I will not show you the exit.\” A group of bunnies jumps out of the bushes and beats you up. Game Over.");
LocationNode* location10Pointer = new LocationNode(location10, nullptr, nullptr, true);

Location location9("You continue to follow the small light to the west. You walk through some leaves and find a group of fireflies. You begin to walk towards them, then suddenly they all surround you and attack. Game Over.");
LocationNode* location9Pointer = new LocationNode(location9, nullptr, nullptr, true);

Location location8("You slowly walk towards the sound of water. It gets closer and closer, and you get excited. You start to run through the pitch black forest to reach the water. You run around a final tree and fall off a cliff. You look down and realize the water is not close to where you will land. Game Over.");
LocationNode* location8Pointer = new LocationNode(location8, nullptr, nullptr, true);

Location location7("You decide to find your own way out. You walk through some trees and find a small pond. You drink some of the water and it makes you sick. Then you begin to feel tired, and see a tent on the east side of the pond. You also see another path on the west side of the pond. You can rest in the tent to the east overnight, or continue exploring the path on the west. ", -1);
location7Pointer = new LocationNode(location7, location12Pointer, location13Pointer, false);

Location location6("You continue to follow the Wolf. As you are walking behind the Wolf, a Bunny jumps out in front of you. It says “Do not follow that Wolf. It is trying to trick you. If you follow me I can show you the real path out of this forest.” The Wolf stands in front of the path on the east. The Bunny hops over to the path towards the West.");
LocationNode* location6Pointer = new LocationNode(location6, location10Pointer, location11Pointer, false);

Location location5("You slowly walk towards the small light. Before you reach it, you run into a small bunny. It looks up at you and says “Hello there. You look lost, I can show you the exit of the forest if you follow me this way.” The bunny points to the east. But you can still see the small lights to the west. You can follow the Bunny to the east, or continue following the small lights to the west.");
LocationNode* location5Pointer = new LocationNode(location5, location9Pointer, location10Pointer, false);

Location location4("You walk through the giant trees to the west. This area is even darker than the one before. You cannot see what is in front of you. But, you listen closely and hear some water sounds to the west. On the east side, you can hear wind noises in the trees.");
LocationNode* location4Pointer = new LocationNode(location4, location8Pointer, entrancepointer, false);

Location location3("You follow the Wolf to the east. He leads you through the confusing paths through the forest. Then, it stops and looks around. It says “I dont recognize this path to the east, but I know the path to the west. Would you like to continue following me?” If you want to keep following the Wolf, go to the west. Otherwise go to the east.");
LocationNode* location3Pointer = new LocationNode(location3, location6Pointer, location7Pointer, false);

Location location2("You ignore the Wolf and walk out of the west side of the clearing. This path is dark, and you step on top of a stone. You twist your ankle. You stop to sit on top of a large rock, and see two more paths. There is a small light in the distance on the path to the east, and a dark path full of giant trees to the west.", -1);
LocationNode* location2Pointer = new LocationNode(location2, location4Pointer, location5Pointer, false);

Location location1("After following the worn trail, you see a large clearing in the trees. You enter the clearing and bump into a wolf who is resting on the ground. It wakes up and says “You must be lost. I know this forest well, follow me and I will show you the exit.” You can follow the Wolf to the east, or go on your own to the west.");
location1Pointer = new LocationNode(location1, location2Pointer, location3Pointer, false);

Location entrance("After exploring the forest all day, you realize that you are lost. You try to find a way out, and begin walking through the forest. You continue to walk until you see two paths ahead of you. A stone path to the east, and a worn dirt trail to the west.");
entrancepointer = new LocationNode(entrance, location1Pointer, location14Pointer, false);

location4Pointer->updateEast(entrancepointer);
location20Pointer->updateEast(location14Pointer);
location17Pointer->updateWest(location1Pointer);
location17Pointer->updateEast(location7Pointer);

    cout << "FOREST ADVENTURE" << endl << endl;
    //https://emojicombos.com/forest-ascii-art
    cout << "               \\_/" << endl;
    cout << "             --(_)-- " << endl;
    cout << "         .'.   / \\" << endl;
    cout << "        / . \\" << endl;
    cout << "       |  |. | ,-'-." << endl;
    cout << "  ,-'-.\\ \\|  /(  .  )" << endl;
    cout << " /  .  \\  |, (  \\|   )" << endl;
    cout << "|  .|/  |_|_(    |/   )" << endl;
    cout << " \\._|,_/  |  '--.|..-'" << endl;
    cout << "____|_____|______|______ " << endl << endl;

    cout << "Pick a name" << endl;

    Player player;
    string playerName;
    getline(cin, playerName);

    player.SetName(playerName);
    player.PrintPlayerInfo();

    bool gameRunning = true;

    LocationNode* currLocation;
    currLocation = entrancepointer;


    while (gameRunning){
    //This will be for the special minigame using rand()
    //it will only be used once at location 20
        if (currLocation == location20Pointer){
            (currLocation->GetThisLocation()).printLocationText();
            srand(time(0));
            bool minigameRunning = false;
            cout << "Reach in? y/n: " << endl;
            char minigameInput;
            cin >> minigameInput;

            if (minigameInput == 'y'){
                minigameRunning = true;
                while (minigameRunning){
                    int random = rand() % 100;
                    if (random <= 40){
                        player.updateHealth(1);
                    }
                    else if (random <= 80){
                        player.updateHealth(-1);
                    }
                    else{
                        player.updateHealth(-2);
                    }
                    if (player.GetHealth() <= 0){
                        minigameRunning = false;
                        gameRunning = false;
                        player.PrintPlayerInfo();
                        cout << "You have ran out of HP. Game Over." << endl;
                        return 0;
                }
                        cout << "Reach in? y/n: " << endl;
                        cin >> minigameInput;
                        if (minigameInput == 'y'){
                        minigameRunning = true;
                        }
                        else{
                        minigameRunning = false;
                        }
                }
            }
        }

        if (currLocation == location15Pointer) {
            player.addItem("Bug Spray");
        }

        if (currLocation == location9Pointer) {
            for (i = 0; i < (player.getInventory()).size(); ++i) {
                if (player.getInventory().at(i) == "Bug Spray") {
                    currLocation->updateText("You continue to follow the small light to the west. You walk through some leaves and find a group of fireflies. You begin to walk towards them, then suddenly they all surround you and attack. Luckily, you have Bug Spray and use it. The fireflies all die, lighting up a path to the exit. You follow it and escape. The end.");
                }
            }
        }

        if (currLocation->checkIfEnding()){
            (currLocation->GetThisLocation()).printLocationText();
            endingArt(currLocation);
            break;
        }
        else{
            int DamageAmt = (currLocation->GetThisLocation()).getDamageAmt();
            player.updateHealth(DamageAmt);
            (currLocation->GetThisLocation()).printLocationText();
            DecisionPoint(player, currLocation, currLocation->GetLocation1(), currLocation->GetLocation2());
            currLocation = currLocation->GetNextLocation();
            cout << endl;
        }



        if (player.GetHealth() <= 0){
            gameRunning = false;
            player.PrintPlayerInfo();
            cout << "You have ran out of HP. Game Over." << endl;
        }

    }

    return 0;
}
