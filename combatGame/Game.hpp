/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains the member variables and function prototypes for
 class Game.
 *********************************************************************/

#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include "Menu.hpp"

void playGame();

void makeMove(Character*, Character*);
void addCharacter(Queue *);
void postRound(Queue *, Queue *, Queue *, int, int &, int &);

#endif /* Game_hpp */
