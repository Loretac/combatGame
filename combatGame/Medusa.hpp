/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains the member variables and function prototypes for
 class Medusa.
 *********************************************************************/

#ifndef Medusa_hpp
#define Medusa_hpp

#include <iostream>
#include "BlueMen.hpp"

class Medusa : public Character // inherits from Character class
{
public:
    Medusa(); // default constructor
    virtual ~Medusa() {}
    virtual int attack();
    virtual int defense();
    virtual int specialAttack(int);
    virtual int specialDefense(int);
    virtual void specialEnd();
};

#endif /* Medusa_hpp */
