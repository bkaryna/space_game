//
// Created by Karyna Babenko on 29/11/2020.
//
#include "planet.h"

Planet::Planet(string n, int w, int h, Creature* point) {
    name=n;
    width=w;
    height=h;
    creaturePointer=point;
}

void Planet::moveUP() {
    if (creaturePointer->getX()<height-2&&creaturePointer->getX()>1)
        --(creaturePointer->getX());
    else{
        creaturePointer->getX()=1;
        creaturePointer->getY()=1;
        creaturePointer->getLives()--;
    }
}
void Planet::moveDOWN() {
    if (creaturePointer->getX()<height-2&&creaturePointer->getX()>0)
        ++(creaturePointer->getX());
    else{
        creaturePointer->getX()=1;
        creaturePointer->getY()=1;
        creaturePointer->getLives()--;
    }
}
void Planet::moveRIGHT() {
    if (creaturePointer->getY()<width-2&&creaturePointer->getY()>0)
        ++(creaturePointer->getY());
    else{
        creaturePointer->getX()=1;
        creaturePointer->getY()=1;
        creaturePointer->getLives()--;
    }
}

void Planet::moveLEFT() {
    if (creaturePointer->getY()<width-2&&creaturePointer->getY()>1)
        --(creaturePointer->getY());
    else{
        creaturePointer->getX()=1;
        creaturePointer->getY()=1;
        creaturePointer->getLives()--;
    }
}

void Planet::showPlanet(int hX, int hY) {
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 0 || i == height-1)
                printw("%d", this->creaturePointer->getLives());
            else if (j == 0 || j == width-1)
                printw("v");
            else if (i==(creaturePointer->getX())&&j==(creaturePointer->getY())){
                creaturePointer->showCreature();
            }
            else if (i==hX&&j==hY){
                printw("U");
            }
            else
                printw(" ");
        }
        printw("\n");
    }
    printw("\n");
}
