//
// Created by Karyna Babenko on 29/11/2020.
//

#ifndef UNTITLED_CREATURE_H
#define UNTITLED_CREATURE_H

#include <iostream>
#include <ncurses.h>
#include <stdio.h>
class Creature{
    char body;
    int posX;
    int posY;
    int lives;
public:
    Creature(char b='?', int x=1, int y=1, int liv=3): body(b), posX(x), posY(y), lives(liv){};
    virtual ~Creature(){};
    int& getX(){return posX;};
    int& getY(){return posY;};
    int& getLives(){return lives;};
    void showCreature(){printw("%c", body);}

};
#endif //UNTITLED_CREATURE_H
