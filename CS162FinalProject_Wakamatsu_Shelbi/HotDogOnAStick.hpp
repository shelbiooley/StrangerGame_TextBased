/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: HotDogOnAStick.hpp
 **************************************************************************/
#ifndef HotDogOnAStick_hpp
#define HotDogOnAStick_hpp

#include "Space.hpp"
#include "Item.hpp"

class HotDogOnAStick : public Space
{
private:
    Item fw;
    Item* fireworks = &fw;
    
public:
    HotDogOnAStick();
    string getName();
    char getInitial();
    bool landOn(Player &p);
    Space* getTop();
    Space* getBottom();
    Space* getLeft();
    Space* getRight();
};

#endif /* HotDogOnAStick_hpp */
