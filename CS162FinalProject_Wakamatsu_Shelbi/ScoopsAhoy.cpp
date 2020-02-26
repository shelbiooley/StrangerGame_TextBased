/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: ScoopsAhoy.cpp
 **************************************************************************/

#include "ScoopsAhoy.hpp"
#include "validation.hpp"
#include "Player.hpp"
#include "Item.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*************************************************************************
ScoopsAhoy constructor
**************************************************************************/
ScoopsAhoy::ScoopsAhoy()
{
    setName("Scoops Ahoy");
    setInitial('S');
    dm.setName("decoded message");
}
/*************************************************************************
 landOn function- player decided what happens when they land on this space
 returns damage variable to be subtracted from health
 **************************************************************************/
bool ScoopsAhoy::landOn(Player &p)
{
    damage = 10;
    //scoops ahoy menu
    cout << "Ahoy! Welcome to Scoops Ahoy Ice Cream Parlor! " << endl
        << "1. Sample all of the flavors" << endl
        << "2. Talk to Steve" << endl;
    
    int choice = validate(1,2);
    
    if(choice == 1)             //user chooses to sample all of the flavors
    {
        cout <<  "You got brain freeze! You lost 3 more health" << endl;
        damage = 13;
    }
    else                        //user chooses to talke to Steve
    {
        if (p.checkBackpack("walkie talkies"))          //if player has walkie talkies
        {
            if (p.checkBackpack("decoded message") )    //if player alreaded got decoded message
            {
                cout <<"You alreday recieved the decoded message." << endl
                    << "Hint: head to LYNX Transportation" << endl;
            }
            //Steve and Robin decode the russian message
            cout << "You told Steve about the Russian spy message you heard." << endl
            << "Steve and Robin helped you translate and decode the message." << endl;
            //add decoded message to player's backpack
            p.putInBackpack(decodedMsg);
        }
        else
        {
            cout << "Steve gave you some advice on picking up girls." << endl
                << "It wasn't very good..." << endl;
        }
    }
    int updateHealth = p.getHealth()-damage;
    p.setHealth(updateHealth);
    cout << "Your health is now: " << p.getHealth() << endl;
    
    if (p.getHealth() == 0)
        return false;
    else
        return true;
}


//getters
string ScoopsAhoy::getName()
{
    return name;
}
char ScoopsAhoy::getInitial()
{
    return initial;
}
Space* ScoopsAhoy::getTop(){
    return top;
}
Space* ScoopsAhoy::getBottom(){
    return bottom;
}
Space* ScoopsAhoy::getLeft(){
    return left;
}
Space* ScoopsAhoy::getRight(){
    return right;
}
