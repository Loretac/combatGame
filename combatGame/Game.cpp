/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains implementation of Game class member functions.
 *********************************************************************/

#include "Game.hpp"

/*********************************************************************
 The playGame function contains the entire operations of the game.
 After the two users choose their characters, a loop for each move
 takes place. The loop exits when one character's health has reached
 0 at the end of the loop. This is enclosed in another loop, which
 runs as long as both players have at least one character left in
 their queue.
 ********************************************************************/
void playGame(){
    
    string choice0 = mainMenu("1. Play Fantasy Combat",
                             "2. Quit");
    
    while(choice0 == "1"){
    srand (time(NULL)); // Seeds for random numbers
        
        Queue p1, p2, loserQueue;
    
        std::cout << std::endl;
        std::cout << "====== FANTASY COMBAT ======" << std::endl;
        
        std::cout << "Player 1: how many fighters? ";
        int numChars1 = inputVal();
        
        std::cout << "Player 2: how many fighters? ";
        int numChars2 = inputVal();
        
        for(int i = 0; i < numChars1; i++){
            std::cout << "Player 1: Choose a character!";
            std::cout << std::endl;
            addCharacter(&p1);
        }
        
        for(int i = 0; i < numChars2; i++){
            std::cout << "Player 2: Choose a character!" << std::endl;
            addCharacter(&p2);
        }
        
        int p1Kills = 0, p2Kills = 0; // record number of kills
        
        while(!p1.isEmpty() && !p2.isEmpty()){
            std::cout << "========= MATCHUP ==========" << std::endl;
            std::cout << p1.getFront()->getName() << " vs. ";
            std::cout << p2.getFront()->getName();
            std::cout << std::endl << std::endl;
            
            int damage; // damage the winning character takes
            
            while(1){
                 // p1 attacks first
                makeMove(p1.getFront(), p2.getFront());
                if(p2.getFront()->getStrength() == 0){ // if p2 dies
                    damage = p1.getFront()->getRoundDamage();
                    break;
                }
                makeMove(p2.getFront(), p1.getFront());
                if(p1.getFront()->getStrength() == 0){ // if p1 dies
                    damage = p2.getFront()->getRoundDamage();
                    break;
                }
            }
            postRound(&p1, &p2,
                      &loserQueue, damage,
                      p1Kills, p2Kills);
        }
        
        std::cout << "Player 1 kills: " << p1Kills << std::endl;
        std::cout << "Player 2 kills: " << p2Kills << std::endl;
        
        if(p1Kills > p2Kills){
            std::cout << "Player 1 is the winner!" << std::endl;
        }
        else if (p2Kills > p1Kills){
            std::cout << "Player 2 is the winner!" << std::endl;
        }
        else{
            std::cout << "It's a draw!" << std::endl;
        }
        
        std::cout << std::endl;
        
        std::cout << "To view the loser queue, press 1. Or press ";
        std::cout << "any key to return to the main menu.";
        std::cout << std::endl;
        string loserMenu;
        std::cin >> loserMenu;
        if(loserMenu == "1"){
        
            loserQueue.printQueue();
        }
        
        string choice = mainMenu("1. Play again",
                                 "2. Quit");
        
        if(choice == "2"){
            break;
        }
}
}

/*********************************************************************
 This function is divided by 3 special ability placements: One defense
 ability before the roll, One attacking ability after the roll but
 before combat, and one ending ability after the combat is finished.
 The damage can negative or greater than the opponent's health.
 ********************************************************************/
void makeMove(Character *attacker, Character *defender){
    int attackRoll = attacker->attack();
    int defendRoll = defender->defense();
    
    std::cout << "Press Enter for " << attacker->getName();
    std::cout << " to attack!" << std::endl;
    std::cin.ignore();
    
    std::cout << attacker->getName() << " currently attacking ";
    std::cout << defender->getName() << std::endl << std::endl;
    
    if(defender->specialDefense(defendRoll) == 0){ //Vampire's
        
        int totalDamage = attackRoll - defendRoll
        - defender->getArmor();
        
        if(totalDamage < 0){ // Damage can never be negative
            totalDamage = 0;
        }
        // Damage can never be greater than opponent's strength
        if(totalDamage > defender->getStrength()){
            totalDamage = defender->getStrength();
        }
    
        std::cout << defender->getName() << ":" << std::endl;
        std::cout << "Armor: " << defender->getArmor() << std::endl;
        std::cout << "Strength: " << defender->getStrength();
        std::cout << std::endl << std::endl;
    
        std::cout << attacker->getName() << " rolled a ";
        std::cout << attackRoll << std::endl;
        std::cout << defender->getName() << " rolled a ";
        std::cout << defendRoll << std::endl << std::endl;
        
        
        if(attacker->specialAttack(attackRoll) == 1){ // Medusa's
            totalDamage = defender->getStrength();
        }
        defender->modifyStrength(totalDamage);
        std::cout << "Total damage: " << totalDamage << std::endl;
        std::cout << std::endl;
        std::cout << defender->getName() << "'s strength: ";
        std::cout << defender->getStrength() << std::endl;
        
        defender->specialEnd();
        
        defender->setRoundDamage(defender->getRoundDamage()
                                 + totalDamage);
        
        
    }
    
    std::cout << "============================" << std::endl;
    

    }

/*********************************************************************
The addCharacter function runs for each character added to each team's
 queue at the start of the game. It takes as a parameter a pointer
 to the queue to which the new character is being added.
 ********************************************************************/
void addCharacter(Queue *newQueue){
    Character *newChar;
    string choice = mainMenu("1. Vampire",
                              "2. Barbarian",
                              "3. Blue Men",
                              "4. Medusa",
                              "5. Harry Potter");
    
    if(choice == "1"){
        newChar = new Vampire;
    }
    if(choice == "2"){
        newChar = new Barbarian;
    }
    if(choice == "3"){
        newChar = new BlueMen;
    }
    if(choice == "4"){
        newChar = new Medusa;
    }
    if(choice == "5"){
        newChar = new HarryPotter;
    }
    
    std::cout << "Name your character: " << std::endl;
    string charName;
    std::getline (std::cin,charName);
    std::cout << std::endl;
    
    newChar->setName(charName); // Set name of new character
    
    newQueue->addBack(newChar); // Add character to back of queue
}

/*********************************************************************
The postRound function operates after each round when one character
 dies. It adds a kill to the winners kill count, restores some of the
 winning character's strength, adds the winning character to the back
 of its respective queue, and adds the losing character to the loser
 queue.
 ********************************************************************/
void postRound(Queue *player1Queue,
               Queue *player2Queue,
               Queue *loserQueue,
               int damage,
               int &p1kills,
               int &p2kills){
    
    Queue *winningPlayer, *losingPlayer;
    
    if(player1Queue->getFront()->getStrength() == 0){ //p2 wins round
        winningPlayer = player2Queue;
        losingPlayer = player1Queue;
        p2kills++;
    }
    else{ // p1 wins round
        winningPlayer = player1Queue;
        losingPlayer = player2Queue;
        p1kills++;
    }
    
    std::cout << winningPlayer->getFront()->getName();
    std::cout << " wins the round!" << std::endl;
    std::cout << "50% damage dealt to ";
    std::cout << winningPlayer->getFront()->getName();
    std::cout << " this round is restored." << std::endl;
    
    // Adjust strength of winner and move to back
    winningPlayer->getFront()->modifyStrength(-(damage / 2));
    std::cout << "Damage done: " << damage << std::endl;
    std::cout << winningPlayer->getFront()->getName();
    std::cout << "'s new strength: ";
    std::cout << winningPlayer->getFront()->getStrength();
    std::cout << std::endl;
    
     // reset round damage
    winningPlayer->getFront()->setRoundDamage(0);
    
    // move winner to back of respective queue
    winningPlayer->moveToBack();
    
    // move loser to back of loser queue
    loserQueue->addBack(losingPlayer->removeFront());
}
