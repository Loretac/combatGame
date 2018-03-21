/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains the member variables and function prototypes for
 class Vampire.
 *********************************************************************/

#ifndef Vampire_hpp
#define Vampire_hpp

#include <iostream>
#include "Character.hpp"

class Vampire : public Character // inherits from Character class
{
public:
    Vampire(); // default constructor
    virtual ~Vampire() {}
    virtual int attack();
    virtual int defense();
    virtual int specialAttack(int);
    virtual int specialDefense(int);
    virtual void specialEnd();
    
};

#endif /* Vampire_hpp */
