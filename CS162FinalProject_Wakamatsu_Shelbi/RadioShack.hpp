/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: RadioShack.hpp
 **************************************************************************/

#ifndef RadioShack_hpp
#define RadioShack_hpp

#include "Space.hpp"
#include "Item.hpp"


class RadioShack : public Space
{
private:
    Item wt;
    Item* walkieTalkies = &wt;
    
public:
    RadioShack();
    string getName();
    char getInitial();
    bool landOn(Player &p);
    Space* getTop();
    Space* getBottom();
    Space* getLeft();
    Space* getRight();
};

#endif /* RadioShack_hpp */
