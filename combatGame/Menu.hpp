/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains the member variables and function prototypes for
 class Menu.
 *********************************************************************/

#ifndef Menu_hpp
#define Menu_hpp

#include <iostream>
#include "Queue.hpp"

using std::string;

string mainMenu(string, string, string, string, string); // options:5
string mainMenu(string, string); // options: 2
int inputVal();

#endif /* Menu_hpp */
