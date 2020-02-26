/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: Item.cpp
 **************************************************************************/

#include "Item.hpp"

//constructor
Item::Item()
{
    name = "item";
}

//setters
void Item::setName(string n){
    name = n;
}

//getters
string Item::getName(){
    return name;
}
