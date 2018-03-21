/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains implementation of Medusa class member functions.
 *********************************************************************/

#include "Medusa.hpp"

/*********************************************************************
 Default constructor for Medusa.
 ********************************************************************/
Medusa::Medusa(){
    setArmor(3);
    setStrength(8);
    setName("Medusa");
    setLives(1);
    numAttackDice = 2;
    numAttackSides = 6;
    numDefendDice = 1;
    numDefendSides = 6;
    setRoundDamage(0);
}

/*********************************************************************
 Attack function for Medusa returns value of random roll
 ********************************************************************/
int Medusa::attack(){
    int roll1 = rand() % 6 + 1;
    int roll2 = rand() % 6 + 1;
    return roll1 + roll2;
}

/*********************************************************************
 Defense function for Medusa returns value of random roll
 ********************************************************************/
int Medusa::defense(){
    int roll = rand() % 6 + 1;
    return roll;
}

/*********************************************************************
 The special attack for Medusa activates if she rolls a 12.
 ********************************************************************/
int Medusa::specialAttack(int roll){
    if(roll == 12){
        std::cout << "Special attack! " << getName();
        std::cout << " turns the opponent to stone!" << std::endl;
        return 1;
    }
    else{
        return 0;
    }
}

/*********************************************************************
 Special defense function for Medusa does not exist and thus returns
 0.
 ********************************************************************/
int Medusa::specialDefense(int roll){
    return 0;
}

/*********************************************************************
 Medusa's special attack at end does not exist and thus returns 0.
 ********************************************************************/
void Medusa::specialEnd(){
    //return 0;
}
