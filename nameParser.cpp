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
#include <sstream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::fstream;
using std::ios;
using std::vector;
using std::stringstream;


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
        stringstream stringObj(fullName);
        string namePart;
        vector<string> vecName;

        while(stringObj >> namePart)
        {
            vecName.push_back(namePart);
        }

        cout << vecName.back() << ", ";

        for (int i = 0; i < vecName.size() - 1; ++i) 
        {
            cout << vecName[i] << " ";
        }

        cout << endl;
    }

    inputFile.close();
}

