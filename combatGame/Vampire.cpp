/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains implementation of Vampire class member functions.
 *********************************************************************/

#include "Vampire.hpp"

/*********************************************************************
 Default constructor for Vampire.
 ********************************************************************/
Vampire::Vampire(){
    setArmor(1);
    setStrength(18);
    setName("Vampire");
    setLives(1);
    numAttackDice = 1;
    numAttackSides = 12;
    numDefendDice = 1;
    numDefendSides = 6;
    setRoundDamage(0);
}

/*********************************************************************
Attack function for vampire returns value of random roll
 ********************************************************************/
int Vampire::attack(){
    int roll = rand() % 12 + 1;
    return roll;
}

/*********************************************************************
 Defense function for vampire returns value of random roll
 ********************************************************************/
int Vampire::defense(){
    int roll = rand() % 6 + 1;
    return roll;
}

/*********************************************************************
 Special attack function for Vampire does not exist and thus returns
 0.
 ********************************************************************/
int Vampire::specialAttack(int roll){
    return 0;
}

/*********************************************************************
 Special defense function for Vampire has a 50% chance of working.
 ********************************************************************/
int Vampire::specialDefense(int roll){
    int event = rand() % 2;
    if(event == 1){
        std::cout << getName() << " has charmed the opponent!";
        std::cout << std::endl;
    }
    return event;
}

/*********************************************************************
 Vampire's special attack at end does not exist and thus returns 0.
 ********************************************************************/
void Vampire::specialEnd(){
}
