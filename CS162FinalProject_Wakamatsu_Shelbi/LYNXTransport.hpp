/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: LYNXTransport.hpp
 **************************************************************************/

#ifndef LYNXTransport_hpp
#define LYNXTransport_hpp

#include "Space.hpp"

class LYNXTransport : public Space
{
    
public:
    LYNXTransport();
    string getName();
    char getInitial();
    bool landOn(Player &p);
    Space* getTop();
    Space* getBottom();
    Space* getLeft();
    Space* getRight();
};

#endif /* LYNXTransport_hpp */
