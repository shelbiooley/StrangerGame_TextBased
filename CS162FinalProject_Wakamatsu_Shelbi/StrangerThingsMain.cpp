/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: StangerThingsMain.cpp
 **************************************************************************/

#include "StarcourtMall.hpp"
#include "Space.hpp"
#include "ScoopsAhoy.hpp"
#include "TheGap.hpp"
#include "RadioShack.hpp"
#include "LYNXTransport.hpp"
#include "HotDogOnAStick.hpp"
#include "TimeOutArcade.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    bool playAgain = true;
    while (playAgain)
    {
        StarcourtMall* mall = new StarcourtMall;
        playAgain = mall->playGame();
        
        delete mall;
    }
    return 0;
        
}

