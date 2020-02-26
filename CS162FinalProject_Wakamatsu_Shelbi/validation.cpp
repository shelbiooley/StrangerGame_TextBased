/*************************************************************************
 ** Program name: validation.cpp
 ** Author: Shelbi Wakamatsu
 ** Date:
 ** Description: input validation function
 **************************************************************************/
#include "validation.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int validate(int min, int max)
{
    int input;
    cin >> input;
    while(cin.fail())
    {
        cout << "Error! " << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> input;
    }
    while (input < min || input > max)
    {
        cout << "Error! " << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> input;
    }
    return  input;
}
