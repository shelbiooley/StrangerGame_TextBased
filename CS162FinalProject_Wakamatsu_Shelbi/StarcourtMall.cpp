/*************************************************************************
 ** Program name: Final Project - Stanger Things Game
 ** Author: Shelbi Wakamatsu
 ** Date: 08/13/19
 ** Description: StarcourtMall.cpp game board
 **************************************************************************/

#include "StarcourtMall.hpp"
#include "Space.hpp"
#include "ScoopsAhoy.hpp"
#include "TheGap.hpp"
#include "RadioShack.hpp"
#include "LYNXTransport.hpp"
#include "HotDogOnAStick.hpp"
#include "TimeOutArcade.hpp"
#include "Player.hpp"
#include "Item.hpp"
#include "validation.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//constructor
StarcourtMall::StarcourtMall()
{
    //set directional space pointers for each location
    A->setBottom(R);
    A->setRight(H);
    H->setRight(S);
    H->setLeft(A);
    H->setBottom(G);
    S->setLeft(H);
    S->setBottom(L);
    R->setTop(A);
    R->setRight(G);
    G->setLeft(R);
    G->setTop(H);
    G->setRight(L);
    L->setTop(S);
    L->setLeft(G);
    
}

//destructor
StarcourtMall::~StarcourtMall()
{
    
}

/*************************************************************************
 printMall function- prints out mall map with legend
 **************************************************************************/

void StarcourtMall::printMall()
{
    cout << "Starcourt Mall: " << endl;
    //prints visual map of mall
    cout << "------------------------" << endl;
    for ( int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (c == 0)
                cout << "|";
            cout << "   " << mall[r][c]->getInitial();
            if (currentRow == r && currentCol == c)
                cout << "*  |";
            else
                cout << "   |";
        }
        cout << endl << "------------------------" << endl;
    }
    
    //prints mall legend
    for ( int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
           cout << mall[r][c]->getInitial() << " = " << mall[r][c]->getName() << endl;
    }
    cout << "* = You are here!" << endl;
}

/*************************************************************************
 movePlayer function- moves the player to a new spot
 **************************************************************************/
void StarcourtMall::movePlayer()
{
    cout << "Where would you like to move to?" << endl;
    //diplay move choices based on which ones aren't null ptrs
    Space* current = mall[currentRow][currentCol];
    int counter = 1;

    if (current->getTop()!= nullptr)
    {
        cout << counter << ". " << current->getTop()->getName() << endl;
        ++counter;
    }
    if (current->getBottom()!=nullptr)
    {
        cout << counter << ". " << current->getBottom()->getName() << endl;
        ++counter;
    }
    if (current->getLeft()!=nullptr)
    {
        cout << counter << ". " << current->getLeft()->getName() << endl;
        ++counter;
    }
    if (current->getRight()!=nullptr)
    {
        cout << counter << ". " << current->getRight()->getName() << endl;
        ++counter;
    }
    
    int move = validate(1, counter);
    
    if(current == A)                //if the player is currently in arcade
    {
        if (move == 1)                      //if the user selects 1
            currentRow += 1;                    //move the player down
        else                                //if the user selects2
            currentCol += 1;                    //move the player right
    }
    else if (current == H)          //if player currently in HDOAS
    {
        if (move == 1)                      //user chooses 1
            currentRow += 1;                    //mover player down
        else if (move == 2)                 //user chooses 2
            currentCol -= 1;                    //move player left
        else                                //user chooses 3
            currentCol += 1;                    //move player right
    }
    else if (current == S)          //if player currently in Scoops Ahoy
    {
        if(move == 1)                       //user chooses 1
            currentRow += 1;                    //move player down
        else                                //user chooses 2
            currentCol -= 1;                    //move player left
    }
    else if (current == R)          //if player currently in radio shack
    {
        if(move == 1)                       //user chooses 1
            currentRow -= 1;                    //move player up
        else                                //user chooses 2
            currentCol += 1;                    //move player right
    }
    else if (current == G)          //if player currently in the gap
    {
        if (move == 1)                      //user chooses 1
            currentRow -= 1;                    //mover player up
        else if (move == 2)                 //user chooses 2
            currentCol -= 1;                    //move player left
        else                                //user chooses 3
            currentCol += 1;                    //move player right
    }
    else                            //if player currently in LYNX
    {
        if(move == 1)                       //user chooses 1
            currentRow -= 1;                    //move player up
        else                                //user chooses 2
            currentCol -= 1;                    //move player left
    }
}

/*************************************************************************
 playGame function- runs the game
 **************************************************************************/
bool StarcourtMall::playGame()
{
        cout << "-------------------------------------------------------------------" << endl
            << "|  \t \t \t Stranger Things Game \t \t \t  |" << endl
            << "| \t \t Warning: may contain season 3 spoilers!  \t |" << endl
            << "-------------------------------------------------------------------" << endl;
        
        cout << "Welcome to Starcourt Mall!" << endl
            << "To stop the mind flayer you must turn off the key in the secret lab." << endl
            << "Figure out how to get in the lab and you win the game!" << endl << endl
            << "You'll start out in the Time Out Arcade" << endl
            << "*Note: You'll start with 100 health, but you'll notice your health decrease by 10 after each move." << endl
    << "\t However, depending on your choices you might lose more than 10 or less than 10." << endl << endl;
    
        bool go;
    
        //loop through moves until health depletes or player wins
        do
        {
            go = mall[currentRow][currentCol]->landOn(player);
            cout << "------------------------------------------------------------" << endl << endl;
            if (go)
            {
                printMall();                                           //print mall
                movePlayer();                                          //promt user to move
            }
        }while (go);
    
        //when game ends
        if(player.getHealth() == 0 )                               //if player is out of health
            cout << "Sorry, you ran out of health! GAME OVER!" << endl;
        else                                                       //if player wins
            cout << "Congratulations!" << endl;
    
        //game over menu
        cout << "Would you like to play again?" << endl
            << "1. Yes" << endl
            << "2. No" << endl;
    
        int end = validate(1,2);
    
        if(end == 1)
           return true;
        else
            return false;
}



//setters
void StarcourtMall::setCurrentRow(int r){
    currentRow = r;
}
void StarcourtMall::setCurrentCol(int c){
    currentCol = c;
}
