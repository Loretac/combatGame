/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains the member variables and function prototypes for
 class Character.
*********************************************************************/

#ifndef Character_hpp
#define Character_hpp

#include <iostream>

using std::string;

class Character
{
protected:
    int armor;
    int strength;
    string name;
    int lives;
    int roundDamage;
    int numAttackDice;
    int numAttackSides;
    int numDefendDice;
    int numDefendSides;
    
public:
    virtual ~Character() {}
    virtual int attack() = 0;
    virtual int defense() = 0;
    virtual int specialAttack(int) = 0;
    virtual int specialDefense(int) = 0;
    virtual void specialEnd() = 0;
    void setArmor(int);
    void setStrength(int);
    void setName(string);
    void setLives(int);
    void modifyStrength(int);
    void setRoundDamage(int);
    int getArmor();
    int getStrength();
    int getLives();
    int getRoundDamage();
    string getName();
    
};
#endif /* Character_hpp */
