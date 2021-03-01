/******************************************************************************
* File:             main.cpp
*
* Author:           Gavin Slusher  
* Created:          02/28/21 
* Description:      Main file for the names exercise
*****************************************************************************/
#include <iostream>
#include "nameParser.hpp"

using std::cout;
using std::endl;

int main(int argc, const char** argv)
{

    if (argv[1] == NULL)
    {
        cout << "Please enter a filename to parse" << endl;
        return -1;
    }

    parseNames(argv[1]);

    return 0;
}

