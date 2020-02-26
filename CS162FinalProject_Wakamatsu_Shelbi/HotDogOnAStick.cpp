/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: HotDogOnAStick.cpp
 **************************************************************************/

#include "HotDogOnAStick.hpp"
#include "validation.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//constructor
HotDogOnAStick::HotDogOnAStick()
{
    setName("Hot Dog On A Stick");
    setInitial('H');
    fw.setName("fireworks");
}
/*************************************************************************
 landOn function- player decided what happens when they land on this space
 returns damage variable to be subtracted from health
 **************************************************************************/
bool HotDogOnAStick::landOn(Player &p)
{
    damage = 10;
    //Hot Dog On A Stick Menu
    cout << "Welcome to Hot Dog on A Stick! " << endl
    << "1. Buy a corndog and fries" << endl
    << "2. Buy a lemondade" << endl;
    
    int choice = validate(1,2);
    
    if(choice == 1)             //user chooses to buy corndog/fries
    {
        if (p.checkBackpack("fireworks")) //if user already got fireworks
        {
            cout << "Yum! This delicious meal helped you keep your health up!" << endl;
            damage = 5;
        }
        else
        {
            cout <<  "Lucas was starving and ate all your fries- but he gave you some fireworks in return! " << endl;
            //put fireworks in backpack
            p.putInBackpack(fireworks);
        }
    }
    else                        //user chooses to buy lemonade
    {
        cout << "WOAH! Who forgot the sugar? This lemonade is sour! Your lose 3 more in health." <<endl;
        damage = 13;
    }
    
    int updateHealth = p.getHealth()-damage;
    p.setHealth(updateHealth);
    cout << "Your health is now: " << p.getHealth() << endl;
    
    if (p.getHealth() == 0)
        return false;
    else
        return true;}


//getters
string HotDogOnAStick::getName()
{
    return name;
}
char HotDogOnAStick::getInitial()
{
    return initial;
}
Space* HotDogOnAStick::getTop(){
    return top;
}
Space* HotDogOnAStick::getBottom(){
    return bottom;
}
Space* HotDogOnAStick::getLeft(){
    return left;
}
Space* HotDogOnAStick::getRight(){
    return right;
}

