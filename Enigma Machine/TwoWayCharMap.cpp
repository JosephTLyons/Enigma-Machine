//
//  TwoWayMap.cpp
//  Enigma Machine
//
//  Created by Joseph Lyons on 4/18/19.
//  Copyright © 2019 Joseph Lyons. All rights reserved.
//

#include "TwoWayCharMap.hpp"

TwoWayCharMap::TwoWayCharMap (const std::string& map)
    : currentMap (map)
{
    // Make sure all elements are uppercase
    for (int i = 0; i < map.size(); i++)
        currentMap[i] = toupper (currentMap[i]);
    
    // Limit to just 26 letters
    currentMap.resize (26);
}

TwoWayCharMap::~TwoWayCharMap()
{

}

char TwoWayCharMap::righToLeft (const char& rightSideCharacter)
{
    unsigned int index = toupper (rightSideCharacter);
    index -= 'A';

    return currentMap[index];
}

char TwoWayCharMap::leftToRight (const char& leftSideCharacter)
{
    unsigned int index = toupper (leftSideCharacter);

    return currentMap.find (index) + 'A';
}


