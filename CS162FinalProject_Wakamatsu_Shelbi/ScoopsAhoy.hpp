/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: ScoopsAhoy.hpp- 
 **************************************************************************/

#ifndef ScoopsAhoy_hpp
#define ScoopsAhoy_hpp

#include "Item.hpp"
#include "Space.hpp"
#include "Player.hpp"
#include <string>
using std::string;

class ScoopsAhoy : public Space
{
private:
    Item dm;
    Item* decodedMsg = &dm;
    
public:
    ScoopsAhoy();
    bool landOn(Player &p);
    string getName();
    char getInitial();
    Space* getTop();
    Space* getBottom();
    Space* getLeft();
    Space* getRight();
};
    
#endif /* ScoopsAhoy_hpp */
