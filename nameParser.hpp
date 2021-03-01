/******************************************************************************
* File:             nameParser.hpp
*
* Author:           Gavin Slusher
* Created:          02/28/21
* Description:      Specification file for Name Manipulation Scripts
*****************************************************************************/
#ifndef NAMEPARSER_HPP
#define NAMEPARSER_HPP

#include <vector>
#include <sstream>


/******************************************************************************
* Function:         void parseNames
* Description:  Parses names from a passed-in file. Assumes western-style
*               naming conventions [Given Name] [Middle Name(s)] [Family Name],
*               where only one name is given for each line of the file.
*
* @param fileName   The filename where the names are stored
*****************************************************************************/
void parseNames(const std::string& fileName);

/******************************************************************************
* Function:         storeNames
* Description:  Stores a passed-in full name into a passed-in vector.
*
* @param fullName   A persons full name.
* @param vecName    The vector in which each part of the person's full name
*                   will be stored.
*****************************************************************************/
void storeNames(std::string& fullName, std::vector<std::string>& vecName);

/******************************************************************************
* Function:         displaySurnameFirst
* Description:  Takes a vector of name-parts and prints them out in a 
*               [Surname], [First Name] [Middle Name(s)] format.
*
* @param vecName    The vector in which each part of the person's full name
*                   is stored.
*****************************************************************************/
void displaySurnameFirst(std::vector<std::string>& vecName);

#endif /* ifndef NAMEPARSER_HPP */
