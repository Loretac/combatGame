/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains the member variables and function prototypes for
 class BlueMen.
 *********************************************************************/

#ifndef BlueMen_hpp
#define BlueMen_hpp

#include <iostream>
#include "Barbarian.hpp"

class BlueMen : public Character // inherits from Character class
{
public:
    BlueMen();
    virtual ~BlueMen() {}
    virtual int attack();
    virtual int defense();
    virtual int specialAttack(int);
    virtual int specialDefense(int);
    virtual void specialEnd();
};

#endif /* BlueMen_hpp */
