/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains implementation of Character class member functions.
 *********************************************************************/

#include <iostream>
#include "Character.hpp"

/*********************************************************************
Setter function for armor. Takes int parameter, returns no values.
*********************************************************************/
void Character::setArmor(int number){
    armor = number;
}

/*********************************************************************
Setter function for strength. Takes int parameter, returns no values.
*********************************************************************/
void Character::setStrength(int number){
    strength = number;
}

/*********************************************************************
Setter function for name. Takes string parameter, returns no values.
*********************************************************************/
void Character::setName(string charName){
    name = charName;
}

/*********************************************************************
Setter function for lives. Takes int parameter, returns no values.
*********************************************************************/
void Character::setLives(int numLives){
    lives = numLives;
}

/*********************************************************************
This function modifys variable strength. It takes int parameter and
returns no values.
*********************************************************************/
void Character::modifyStrength(int damage){
    strength -= damage;
}

/*********************************************************************
Setter function for damage done to character in current round.
 *********************************************************************/
void Character::setRoundDamage(int damage){
    roundDamage = damage;
}

/*********************************************************************
 Getter function for armor.
*********************************************************************/
int Character::getArmor(){
    return armor;
}

/*********************************************************************
 Getter function for strength.
*********************************************************************/
int Character::getStrength(){
    return strength;
}

/*********************************************************************
 Getter function for name.
*********************************************************************/
string Character::getName(){
    return name;
}

/*********************************************************************
Getter function for lives.
*********************************************************************/
int Character::getLives(){
    return lives;
}

/*********************************************************************
 Getter function for round damage.
 *********************************************************************/
int Character::getRoundDamage(){
    return roundDamage;
}


