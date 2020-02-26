/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: TheGap.cpp
 **************************************************************************/

#include "TheGap.hpp"
#include "validation.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//constructor
TheGap::TheGap()
{
    setName("The Gap");
    setInitial('G');
    newClothes.setName("new clothes");
}

/*************************************************************************
 landOn function- player decided what happens when they land on this space
 returns damage variable to be subtracted from health
 **************************************************************************/
bool TheGap::landOn(Player &p)
{
    damage = 10;
    //The Gap menu
    cout << "Welcome to The Gap! " << endl
    << "1. Buy new clothes" << endl
    << "2. Hide from the mind flayer" << endl;
    
    int choice = validate(1,2);
    
    if(choice == 1)             //user chooses to buy clothes
    {
        if (p.checkBackpack("new clothes")) //if user already bought new clothes
        {
            cout << "Sorry- your allowance isn't enough to buy you another new look" << endl;
        }
        else
        {
            cout <<  "You purchased a new look and got some new found confidence! " << endl;
            //put new clothes in backpack
            p.putInBackpack(clothes);
        }
    }
    else                        //user chooses to hide from mind flayer
    {
        cout << "You hid from the mind flayer and avoided taking anymore damage." <<endl;
        damage = 0;
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
string TheGap::getName()
{
    return name;
}
char TheGap::getInitial()
{
    return initial;
}
Space* TheGap::getTop(){
    return top;
}
Space* TheGap::getBottom(){
    return bottom;
}
Space* TheGap::getLeft(){
    return left;
}
Space* TheGap::getRight(){
    return right;
}
