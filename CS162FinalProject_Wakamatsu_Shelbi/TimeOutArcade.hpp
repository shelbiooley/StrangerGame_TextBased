/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: TimeOutArcade.hpp
 **************************************************************************/

#ifndef TimeOutArcade_hpp
#define TimeOutArcade_hpp

#include "Space.hpp"
#include "Item.hpp"

class TimeOutArcade : public Space
{
private:
    Item bb;
    Item* bat = &bb;
    bool dumped = false;
    
public:
    TimeOutArcade();
    string getName();
    char getInitial();
    bool landOn(Player &p);
    Space* getTop();
    Space* getBottom();
    Space* getLeft();
    Space* getRight();
};

#endif /* TimeOutArcade_hpp */
