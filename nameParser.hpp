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

void parseNames(const std::string& fileName);
void storeNames(std::string& fullName, std::vector<std::string>& vecName);
void displaySurnameFirst(std::vector<std::string>& vecName);

#endif /* ifndef NAMEPARSER_HPP */
