/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: RadioShack.cpp
 **************************************************************************/
#include "RadioShack.hpp"
#include "validation.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//constructor
RadioShack::RadioShack()
{
    setName("Radio Shack");
    setInitial('R');
    wt.setName("walkie talkies");
}

/*************************************************************************
 landOn function- player decided what happens when they land on this space
 returns damage variable to be subtracted from health
 **************************************************************************/
bool RadioShack::landOn(Player &p)
{
    damage = 10;
    //radio shack menu
    cout << "Welcome to Radio Shack! " << endl
    << "1. Buy walkie talkies" << endl
    << "2. Use the phone" << endl;
    
    int choice = validate(1,2);
    
    if(choice == 1)             //user chooses to buy walkie talkies
    {
        if (p.checkBackpack("walkie talkies"))                      //if user already bought walkie talkies
        {
            cout << "You already have walkie talkies... but you can have some fresh batteries." << endl;
        }
        else
        {
            cout <<  "You purchased walkie talkies!" << endl        //if they haven't purchased walkie talkies yet
                << "As you were adjusting the channel, your walkie talkie picked up something strange..." <<endl
            << "It seems to be a Russian message... you'll need help decoding it." << endl;
            //put walkie talkies in backpack
            p.putInBackpack(walkieTalkies);
        }
    }
    else                       //user chooses to use phone
    {
        cout << "You used Radio Shack's phone and called for some back up." << endl
            << "Help is on the way!"  << endl;
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
string RadioShack::getName()
{
    return name;
}
char RadioShack::getInitial()
{
    return initial;
}
Space* RadioShack::getTop(){
    return top;
}
Space* RadioShack::getBottom(){
    return bottom;
}
Space* RadioShack::getLeft(){
    return left;
}
Space* RadioShack::getRight(){
    return right;
}
