/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: TheGap.hpp
 **************************************************************************/

#ifndef TheGap_hpp
#define TheGap_hpp
#include "Space.hpp"
#include "Item.hpp"

class TheGap : public Space
{
private:
    Item newClothes;
    Item* clothes = &newClothes;
    
public:
    TheGap();
    string getName();
    char getInitial();
    bool landOn(Player &p);
    Space* getTop();
    Space* getBottom();
    Space* getLeft();
    Space* getRight();
    
};
#endif /* TheGap_hpp */
