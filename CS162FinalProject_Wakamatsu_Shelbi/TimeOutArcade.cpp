/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: TimeOutArcade.cpp
 **************************************************************************/

#include "TimeOutArcade.hpp"
#include "validation.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//constructor
TimeOutArcade::TimeOutArcade()
{
    setName("Time Out Arcade");
    setInitial('A');
    bb.setName("baseball bat");
}

/*************************************************************************
 landOn function- player decided what happens when they land on this space
 returns damage variable to be subtracted from health
 **************************************************************************/
bool TimeOutArcade::landOn(Player &p)
{
    damage = 10;
    //time out arcade menu
    cout << "Welcome to Time Out Arcade! " << endl
    << "1. Play Dragon's Lair" << endl
    << "2. Play Ski Ball " << endl;
    
    int choice = validate(1,2);
    
    if(choice == 1)             //user chooses to play Dragon's Lair
    {
        if (dumped)             //if user already dumped
        {
            cout << "You were killed by dragonfire and still haven't beat the high score." << endl;
        }
        else
        {
            cout <<  "El runs into you and dumps your a** for lying to her " << endl
            << "You lose 3 more health points" << endl;
            damage = 13;
            dumped = true;
        }
    }
    else                        //user chooses to play ski ball
    {
        if(p.checkBackpack("baseball bat"))  //if user already won bat
            cout << "You did good, but there's no other good prizes so you gift your tickets to a little kid." << endl;
        cout << "HIGH SCORE! You take all your ticket winnings and trade them in for a baseball bat " <<endl;
        //put bat in backpack
        p.putInBackpack(bat);
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
string TimeOutArcade::getName()
{
    return name;
}
char TimeOutArcade::getInitial()
{
    return initial;
}
Space* TimeOutArcade::getTop(){
    return top;
}
Space* TimeOutArcade::getBottom(){
    return bottom;
}
Space* TimeOutArcade::getLeft(){
    return left;
}
Space* TimeOutArcade::getRight(){
    return right;
}

