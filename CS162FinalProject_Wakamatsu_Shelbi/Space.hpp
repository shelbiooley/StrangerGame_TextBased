/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: Space.hpp
 **************************************************************************/

#ifndef Space_hpp
#define Space_hpp

#include "Player.hpp"
#include <string>
using std::string;

class Space
{
protected:
    Space* top = nullptr;
    Space* bottom = nullptr;
    Space* left = nullptr;
    Space* right = nullptr;
    string name = "Default";
    char initial = 'i';
    int damage = 0;
    
public:
    virtual bool landOn(Player &p) = 0;  //function for event when you land on this space
    
    //setters
    void setTop(Space*);
    void setBottom(Space*);
    void setLeft(Space*);
    void setRight(Space*);
    void setName(string);
    void setInitial(char);
    
    //getters
    virtual string getName();
    virtual char getInitial();
    virtual Space* getTop();
    virtual Space* getBottom();
    virtual Space* getLeft();
    virtual Space* getRight();
    
};

#endif /* Space_hpp */
