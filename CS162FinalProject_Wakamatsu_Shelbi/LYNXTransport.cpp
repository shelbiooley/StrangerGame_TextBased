/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: LYNXTransport.cpp
 **************************************************************************/

#include "LYNXTransport.hpp"
#include "validation.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//constructor
LYNXTransport::LYNXTransport()
{
    setName("LYNX Transportation");
    setInitial('L');
}

/*************************************************************************
 landOn function- player decided what happens when they land on this space
 returns damage variable to be subtracted from health
 **************************************************************************/
bool LYNXTransport::landOn(Player &p)
{
    damage = 10;
    //if the user has decoded message
    if (p.checkBackpack("decoded message"))
    {
        cout << "YES! The code worked- you get into the secret lab" << endl
        << "You destroy the key, close the doorway, and stop the mind flayer!" << endl
        << "YOU WON!" <<endl;
        
        return false;
        
    }
    else
    {
        cout << "You find a secret lab but can't get in..." << endl
            << "To get into the lab you need a secret code." << endl;
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
string LYNXTransport::getName()
{
    return name;
}
char LYNXTransport::getInitial()
{
    return initial;
}
Space* LYNXTransport::getTop(){
    return top;
}
Space* LYNXTransport::getBottom(){
    return bottom;
}
Space* LYNXTransport::getLeft(){
    return left;
}
Space* LYNXTransport::getRight(){
    return right;
}

