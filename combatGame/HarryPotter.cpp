/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains implementation of Harry Potter class member
 functions.
 *********************************************************************/

#include "HarryPotter.hpp"

/*********************************************************************
 Default constructor for HarryPotter.
 ********************************************************************/
HarryPotter::HarryPotter(){
    setArmor(0);
    setStrength(10);
    setName("Harry Potter");
    setLives(2);
    numAttackDice = 2;
    numAttackSides = 6;
    numDefendDice = 2;
    numDefendSides = 6;
    setRoundDamage(0);
}

/*********************************************************************
 Attack function for HarryPotter returns value of random roll
 ********************************************************************/
int HarryPotter::attack(){
    int roll1 = rand() % 6 + 1;
    int roll2 = rand() % 6 + 1;
    return roll1 + roll2;
}

/*********************************************************************
 Defense function for HarryPotter returns value of random roll
 ********************************************************************/
int HarryPotter::defense(){
    int roll1 = rand() % 6 + 1;
    int roll2 = rand() % 6 + 1;
    return roll1 + roll2;
}

/*********************************************************************
 Special attack function for HarryPotter does not exist and thus
 returns 0.
 ********************************************************************/
int HarryPotter::specialAttack(int roll){
    return 0;
}

/*********************************************************************
 Special defense function for HarryPotter does not exist and thus
 returns 0.
 ********************************************************************/
int HarryPotter::specialDefense(int roll){
    return 0;
}

/*********************************************************************
 HarryPotter's special attack activates when he has 2 lives and
 reaches 0 strength.
 ********************************************************************/
void HarryPotter::specialEnd(){
    if(lives == 2 && strength == 0){
        std::cout << std::endl << " Special healing ability! ";
        std::cout << getName() << " restores strength to 20.";
        std::cout << std::endl;
        setLives(1);
        setStrength(20);
    }
}
