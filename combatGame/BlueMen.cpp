/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains implementation of BlueMen class member functions.
 *********************************************************************/

#include "BlueMen.hpp"

/*********************************************************************
 Default constructor for BlueMen.
 ********************************************************************/
BlueMen::BlueMen(){
    setArmor(3);
    setStrength(12);
    setName("Blue Men");
    setLives(1);
    numAttackDice = 2;
    numAttackSides = 10;
    numDefendDice = 3;
    numDefendSides = 6;
    setRoundDamage(0);
}

/*********************************************************************
 Attack function for BlueMen returns value of random roll
 ********************************************************************/
int BlueMen::attack(){
    int roll1 = rand() % 10 + 1;
    int roll2 = rand() % 10 + 1;
    return roll1 + roll2;
}

/*********************************************************************
 Defense function for BlueMen returns value of random roll
 ********************************************************************/
int BlueMen::defense(){
    int roll = 0;
    
    for(int i = 0; i < numDefendDice; i++){
        roll += rand() % 6 + 1;
    }
    return roll;
}

/*********************************************************************
 Special attack function for BlueMen does not exist and thus returns
 0.
 ********************************************************************/
int BlueMen::specialAttack(int roll){
    return 0;
}

/*********************************************************************
 Special defense function for BlueMen does not exist and thus returns
 0.
 ********************************************************************/
int BlueMen::specialDefense(int roll){
    return 0;
}

/*********************************************************************
 BlueMen's special attack at the end of the turn activate if strength
 is decreased by 4 points.
 ********************************************************************/
void BlueMen::specialEnd(){
    if(strength <= 4 && numDefendDice == 3){
        std::cout << getName() << "  lose two defend dice!";
        std::cout << std::endl;
        numDefendDice = 1;
    }
    else if(strength <= 4 && numDefendDice == 2){
        std::cout << getName() << " lose one defend die!";
        std::cout << std::endl;
        numDefendDice = 1;
    }
    else if(strength <= 8 && numDefendDice == 3){
        std::cout << getName() << " lose one defend die!";
        std::cout << std::endl;
        numDefendDice = 2;
    }
}
