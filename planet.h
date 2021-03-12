//
// Created by Karyna Babenko on 29/11/2020.
//

#ifndef UNTITLED_PLANET_H
#define UNTITLED_PLANET_H
#include "creature.h"
#include <time.h>
using namespace std;
class Planet {
    string name;
    int width;
    int height;
    Creature *creaturePointer;
public:
    Planet(string n, int w, int h, Creature *point);
    virtual ~Planet() {};
    void showPlanet(int hX, int hY);
    void moveUP();
    void moveDOWN();
    void moveRIGHT();
    void moveLEFT();
    int getHeight(){return height;}
    int getWidth(){return width;}
    //static int ifHome(){return gotHome;};
};
#endif //UNTITLED_PLANET_H
