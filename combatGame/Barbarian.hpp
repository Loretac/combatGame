/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains the member variables and function prototypes for
 class Barbarian.
 *********************************************************************/

#ifndef Barbarian_hpp
#define Barbarian_hpp

#include <iostream>
#include "Vampire.hpp"

class Barbarian : public Character // inherits from Character class
{
public:
    Barbarian(); // default constructor
    virtual ~Barbarian() {}
    virtual int attack();
    virtual int defense();
    virtual int specialAttack(int);
    virtual int specialDefense(int);
    virtual void specialEnd();
};



#endif /* Barbarian_hpp */
