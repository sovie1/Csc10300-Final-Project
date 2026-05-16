/* -----
The include guard was written with the aid of ChatGPT;
when asked how to resolve the redefinition error
the generated text helped me write the following code:
accessed: May 2026
 -------- */
#ifndef LOCATION_H
#define LOCATION_H

#include <string>

using namespace std;

class Location{
    private:
        string locationText;
        int damageAmt;

    public:
        Location();
        Location(string setlocationText);
        Location(string setlocationText, int damageAmount);
        void updateText(string text);
        void printLocationText();
        int getDamageAmt();
        string getLocationText();



};

#endif // LOCATION_H
