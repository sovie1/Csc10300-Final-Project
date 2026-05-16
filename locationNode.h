
/* -----
The include guard was written with the aid of ChatGPT;
when asked how to resolve the redefinition error
the generated text helped me write the following code:
accessed: May 2026
 -------- */
#ifndef LOCATIONNODE_H
#define LOCATIONNODE_H

#include "location.h"
class LocationNode{
    private:
        LocationNode* nextLocation = nullptr;
        Location location;
        LocationNode* location1;
        LocationNode* location2;
        bool isEnding;


    public:
        void SetNextLocation(LocationNode* nextLocationPointer);
        LocationNode(Location locationInput, LocationNode* location1, LocationNode* location2, bool isEnding);
        Location GetThisLocation();
        LocationNode* GetLocation1();
        LocationNode* GetLocation2();

        LocationNode* GetNextLocation();
        bool checkIfEnding();
        void updateWest(LocationNode* update);
        void updateEast(LocationNode* update);
        void updateText(string text);
};

#endif // LOCATIONNODE_H
