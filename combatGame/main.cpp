/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 The fantasy combat game is a 2-player game that allows each player
 to choose a lineup of characters to fight. The player with the most
 kills against the opponent is the winner!
 
 Misc. notes:
 
 ** Damage restored to winning fighter's health is static at 50%,
 rounded down to nearest integer.
 
 ** Half of ALL damage done to Harry Potter characters is restored,
 even if they were done over multiple lives.
 
 ** Once Blue Men characters lose defend dice, they are gone forever.
 *********************************************************************/

#include <iostream>
#include "Game.hpp"

int main() {

    playGame();
    
    return 0;
}
