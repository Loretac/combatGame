/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains the function definitions for the class Queue.
 *********************************************************************/

#include <iostream>
#include "Queue.hpp"

// Default constructor
Queue::Queue(){
    head = nullptr;
}

/*********************************************************************
This function returns true if the queue is empty and false if not.
It takes no parameters.
 ********************************************************************/
bool Queue::isEmpty(){
    if(head == nullptr){
        return true;
    }
    
    else{
        return false;
    }
}

/*********************************************************************
This function creates a node with a character pointer parameter, and
 appends it to the back of the queue. It returns no value.
 ********************************************************************/
void Queue::addBack(Character *fighter){
    
    if(isEmpty()){
        head = new QueueNode(fighter);
        head->next = head;
        head->prev = head;
    }
    else{ // List is not empty
        // Create a new pointer to traverse the list
        QueueNode *ptr = head;
        
        // While we aren't at the end of the list...
        while(ptr != head->prev){
            //Keep moving forward
            ptr = ptr->next;
        }
        
        // At this point, ptr points to head->prev, which is the last node.
        ptr->next = new QueueNode(fighter);
        head->prev = ptr->next;
        QueueNode *ptr2 = ptr->next;
        ptr2->prev = ptr;
        ptr2->next = head;
    }
}

/*********************************************************************
 This function returns the character in the node at the front of the
 queue. It takes no parameters.
 ********************************************************************/
Character* Queue::getFront(){
    return head->fighter;
}

/*********************************************************************
 This function removes the front node and returns the character. It
 takes no parameters.
 ********************************************************************/
Character * Queue::removeFront(){
    std::cout << std::endl;
    QueueNode *ptr;
    
    if(head == head->next){ // only one item
        ptr = head;
        head = nullptr;
    }
    else{ // multiple items in queue
        ptr = head;
        head = ptr->next;
        QueueNode *ptr2 = ptr->prev;
        ptr2->next = head;
        head->prev = ptr2;
    }
    delete ptr;
    return ptr->fighter;
}

/*********************************************************************
 This function prints the items in the queue in reverse. It takes no
 parameters and returns no values.
 ********************************************************************/

void Queue::printQueue(){
    std::cout << std::endl;
    if(isEmpty()){
        std::cout << "The list is empty." << std::endl;
    }
    else if(head == head->next){ // one node
        std::cout << head->fighter->getName() << std::endl;
    }
    else{
        // Create a new pointer to traverse the list
        QueueNode *ptr = head->prev;
        
        // While we aren't at the end of the list...
        do{
            std::cout << ptr->fighter->getName() << std::endl; // print value of node
            ptr = ptr->prev; // move on to the previous node
        }while(ptr != head->prev);
    }
    std::cout << std::endl << std::endl;
}

/*********************************************************************
Moves item at head to the back of the queue.
 ********************************************************************/
void Queue::moveToBack(){
    head = head->next;
}

/*********************************************************************
 Queue destructor.
 ********************************************************************/
Queue::~Queue(){
    if(isEmpty()){
        // do nothing
    }
    else if(head == head->next){ // only one item
        delete head->fighter;
        delete head;
    }
    else{
    
    // Create a new pointer to traverse the list in order:
    QueueNode *ptr = head->next;
        
        while(ptr != head){
            // Create another pointer to keep track of node to be deleted
            QueueNode *closedNode = ptr;
            
            ptr = ptr->next; // Move to the next node
            delete closedNode->fighter;
            delete closedNode;
        }
        delete head->fighter;
        delete head;
        
    }
         
         
}


