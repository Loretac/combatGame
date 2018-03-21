/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains implementation of Barbarian class member functions.
 *********************************************************************/

#include <iostream>
#include "Barbarian.hpp"

/*********************************************************************
Default constructor for Barbarian.
 ********************************************************************/
Barbarian::Barbarian(){
    setArmor(0);
    setStrength(12);
    setName("Barbarian");
    setLives(1);
    numAttackDice = 2;
    numAttackSides = 6;
    numDefendDice = 2;
    numDefendSides = 6;
    setRoundDamage(0);
}

/*********************************************************************
 Attack function for vampire returns value of random roll
 ********************************************************************/
int Barbarian::attack(){
    int roll1 = rand() % 6 + 1;
    int roll2 = rand() % 6 + 1;
    return roll1 + roll2;
}

/*********************************************************************
 Defense function for Defense returns value of random roll
 ********************************************************************/
int Barbarian::defense(){
    int roll1 = rand() % 6 + 1;
    int roll2 = rand() % 6 + 1;
    return roll1 + roll2;
}

/*********************************************************************
 Special attack function for Barbarian does not exist and thus returns
 0.
 ********************************************************************/
int Barbarian::specialAttack(int roll){
    return 0;
}

/*********************************************************************
 Special defense function for Barbarian does not exist and thus returns
 0.
 ********************************************************************/
int Barbarian::specialDefense(int roll){
    return 0;
}

/*********************************************************************
  Barbarian's special attack at end does not exist and thus returns 0.
 ********************************************************************/
void Barbarian::specialEnd(){
    // return 0;
}
