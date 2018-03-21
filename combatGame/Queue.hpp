/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
This file contains the member variables and function prototypes for
class Queue.
*********************************************************************/

#ifndef Queue_hpp
#define Queue_hpp

#include <iostream>
#include "HarryPotter.hpp"

class Queue{
private:
    struct QueueNode // Private member variable
    {
    public:
        Character *fighter;
        // ~QueueNode();
        QueueNode *next;
        QueueNode *prev;
        QueueNode(Character *char1,
                  QueueNode *next1 = nullptr,
                  QueueNode *prev1 = nullptr)
        {
            fighter = char1;
            next = next1;
            prev = prev1;
        }
    };
    QueueNode *head;
    
public:
    Queue(); // Constructor
    ~Queue(); // Destructor
    bool isEmpty();
    void addBack(Character *fighter);
    Character* getFront();
    Character* removeFront();
    void printQueue();
    void moveToBack();
    
};

#endif /* Queue_hpp */
