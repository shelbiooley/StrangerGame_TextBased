/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: Player.hpp
 **************************************************************************/

#ifndef Player_hpp
#define Player_hpp
#include "Item.hpp"
#include <vector>
using std::vector;

class Player
{
private:
    int health = 100;
    vector<Item*> backpack;
    int backpackSize = 5;       //max number items player can put in backpack
    int holding = 0;            //number items currently in backpack
    
public:
    Player();
    bool checkBackpack(string);
    void putInBackpack(Item*);
    //setters
    void setHealth(int h);
    
    //getters
    int getHealth();
};

#endif /* Player_hpp */
