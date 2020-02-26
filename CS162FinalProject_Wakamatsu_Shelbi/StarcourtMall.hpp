/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: StarcourtMall.hpp game board
 **************************************************************************/

#ifndef StarcourtMall_hpp
#define StarcourtMall_hpp

#include "Space.hpp"
#include "ScoopsAhoy.hpp"
#include "TheGap.hpp"
#include "RadioShack.hpp"
#include "LYNXTransport.hpp"
#include "HotDogOnAStick.hpp"
#include "TimeOutArcade.hpp"
#include "Player.hpp"
#include "Item.hpp"

class StarcourtMall
{
private:
    Player player;
    int currentRow = 0;         //track users current row position
    int currentCol = 0;         //tracks users current col position
    //all shops in mall and space ptrs to shops
    ScoopsAhoy scoops;
    Space* S = &scoops;
    TheGap gap;
    Space* G = &gap;
    RadioShack radio;
    Space* R = &radio;
    LYNXTransport lynx;
    Space* L = &lynx;
    HotDogOnAStick hdoas;
    Space* H = &hdoas;
    TimeOutArcade arcade;
    Space* A = &arcade;
    //array/gameboard of mall
    Space* mall[2][3] = {{A, H, S},
                         {R, G, L}};
    
    
public:
    StarcourtMall();
    ~StarcourtMall();
    void movePlayer();
    void printMall();
    bool playGame();
    void setCurrentRow(int r);
    void setCurrentCol(int c);
};


#endif /* StarcourtMall_hpp */
