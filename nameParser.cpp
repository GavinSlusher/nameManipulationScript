/******************************************************************************
* File:             nameParser.cpp
*
* Author:           Gavin Slusher  
* Created:          02/28/21 
* Description:      Specification file for Name Manipulation Script
*****************************************************************************/
#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::fstream;
using std::ios;


void parseNames(const string& fileName)
{
    fstream inputFile;

    inputFile.open(fileName, ios::in);
    
    if (inputFile.fail())
    {
        cout << "Cannot access file." << endl;
    }

    string fullName;

    while (getline(inputFile, fullName))
    {
        cout << fullName << endl;
    }
}

