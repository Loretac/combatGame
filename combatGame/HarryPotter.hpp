/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains the member variables and function prototypes for
 class HarryPotter.
 *********************************************************************/

#ifndef HarryPotter_hpp
#define HarryPotter_hpp

#include <iostream>
#include "Medusa.hpp"

class HarryPotter : public Character // inherits from Character class
{
public:
    HarryPotter();
    virtual ~HarryPotter() {}
    virtual int attack();
    virtual int defense();
    virtual int specialAttack(int);
    virtual int specialDefense(int);
    virtual void specialEnd();
};

#endif /* HarryPotter_hpp */
