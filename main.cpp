/******************************************************************************
* File:             main.cpp
*
* Author:           Gavin Slusher  
* Created:          02/28/21 
* Description:      Main file for the names exercise
*****************************************************************************/
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, const char** argv)
{

    if (argv[1] == NULL)
    {
        cout << "Please enter a filename to parse" << endl;
        return -1;
    }

    cout << "hello world" << endl;

    return 0;
}

