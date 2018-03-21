/*********************************************************************
 ** Program name: Project 3/4 - Fantasy Combat Game
 ** Author: B. Christopher Loreta
 ** Date: 20 Nov 2017
 ** Description:
 
 This file contains implementation of Menu class member functions.
 *********************************************************************/

#include "Menu.hpp"

using std::string;
using std::cout;
using std::endl;

/*********************************************************************
The mainMenu function provides 4 options for the user and runs through
an input validation, returning the value that was input by the user.
Any invalid inputs are declined and correct input is requested.
 ********************************************************************/
string mainMenu(string option1,
                      string option2,
                      string option3,
                      string option4,
                      string option5
                      )
{
    string input;
    cout << option1 << endl;
    cout << option2 << endl;
    cout << option3 << endl;
    cout << option4 << endl;
    cout << option5 << endl;
    
    cout << "Enter your choice: ";
    getline(std::cin, input);
    
    // Basic input validation
    while (input != "1" &&
           input != "2" &&
           input != "3" &&
           input != "4" &&
           input != "5"
           )
    {
        cout << "Please choose a valid option." << endl;
        getline(std::cin, input);
    }
    
    return input;
}

/*********************************************************************
 Same as above functions, with 2 options instead of 5.
 ********************************************************************/
string mainMenu(string option1,
                string option2
                )
{
    string input;
    cout << option1 << endl;
    cout << option2 << endl;
    
    cout << "Enter your choice: ";
    getline(std::cin, input);
    
    // Basic input validation
    while (input != "1" &&
           input != "2"
           )
    {
        cout << "Please choose a valid option." << endl;
        getline(std::cin, input);
    }

    return input;
}

/*********************************************************************
 This function validates input to ensure an input is an integer.
 Check if string is an int source:
 https://stackoverflow.com/questions/2844817/how-do-i-check-if-a-c-string-is-an-int
 ********************************************************************/
int inputVal(){
    string myString;
    int value = 0;
    
    std::cin >> myString;
    
    bool has_only_digits = (myString.find_first_not_of( "0123456789" ) == string::npos);

    
        while(!has_only_digits){
            std::cout << "please enter a valid number." << std::endl;
            std::cin >> myString;
            has_only_digits = (myString.find_first_not_of( "0123456789" ) == string::npos);
        }
    
        value = std::stoi(myString);
    
    
    return value;
}
