/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: Space.cpp- space class member functions
 **************************************************************************/

#include "Space.hpp"

//setters
void Space::setTop(Space* t){
    top = t;
}
void Space::setBottom(Space* b){
    bottom = b;
}
void Space::setLeft(Space* l){
    left = l;
}
void Space::setRight(Space* r){
    right = r;
}
void Space::setName(string n){
    name = n;
}
void Space::setInitial(char i){
    initial = i;
}
    
//getters
string Space::getName()
{
    return name;
}
char Space::getInitial()
{
    return initial;
}
Space* Space::getTop(){
    return top;
}
Space* Space::getBottom(){
    return bottom;
}
Space* Space::getLeft(){
    return left;
}
Space* Space::getRight(){
    return right;
}
