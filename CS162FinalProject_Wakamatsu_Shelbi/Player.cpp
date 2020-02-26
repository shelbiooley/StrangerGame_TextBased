/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: Player.cpp
 **************************************************************************/
#include "Player.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*************************************************************************
 Player constructor
 **************************************************************************/
Player::Player()
{
  
}

/*************************************************************************
 checkBackpack function - checks to see if player has specific item in
 their backpack
 **************************************************************************/
bool Player::checkBackpack(string itemName)
{
    bool hasItem = false;
    
    for ( int i = 0; i < backpack.size(); i++)
    {
        if(backpack[i]->getName() == itemName)
            hasItem = true;
    }
    
    return hasItem;
}
/*************************************************************************
 putInBackpack function- adds an item to the player's backpack
 **************************************************************************/
void Player::putInBackpack(Item* item)
{
   if (backpack.size() < backpackSize)
   {
       backpack.push_back(item);
       cout << "You put the " << item->getName() << " in your backpack." << endl;
   }
   else
       cout << "Sorry, your backpack is full! You can't fit the " << item->getName() << " inside." <<endl;
    
}

//setter
void Player::setHealth(int h){
    if (h < 0)
        health = 0;
    else
        health = h;
}

//getter
int Player::getHealth(){
    return health;
}
