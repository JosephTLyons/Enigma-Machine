//
//  Reflector.cpp
//  Enigma Machine
//
//  Created by Joseph Lyons on 4/11/19.
//  Copyright © 2019 Joseph Lyons. All rights reserved.
//

#include "Reflector.hpp"

Reflector::Reflector (const std::string& map)
{
    currentMap = map;
}

unsigned char Reflector::getMappedCharacter (unsigned char input) const
{
    if (input < 'A')
        input = 'A';

    else if (input > 'Z')
        input = 'Z';

    input = (toupper (input)) - 'A';

    return currentMap[input];
}
