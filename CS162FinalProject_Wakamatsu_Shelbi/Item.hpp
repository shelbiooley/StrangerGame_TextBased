/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: Item.hpp
 **************************************************************************/


#ifndef Item_hpp
#define Item_hpp
#include <string>
using std::string;

class Item
{
private:
    string name;
    
public:
    Item();
    string getName();
    void setName(string);
};

#endif /* Item_hpp */
