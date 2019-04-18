//
//  Rotor.cpp
//  Enigma Machine
//
//  Created by Joseph Lyons on 4/10/19.
//  Copyright © 2019 Joseph Lyons. All rights reserved.
//

#include "Rotor.hpp"


Rotor::Rotor (const unsigned short int& rotorNumber, const std::string& map)
    : currentMap (map)
{
    setRotorNumber (rotorNumber);
}

void Rotor::setRotorNumber (const unsigned short int& rotorNumber)
{
    // Numbers come in as 1-26

    if (rotorNumber > 25)
        currentRotorNumber = 25;

    else if (rotorNumber == 0)
        currentRotorNumber = 0;

    else
        currentRotorNumber = rotorNumber - 1;
}

void Rotor::incrementRotorNumber()
{
    if (currentRotorNumber == 25)
        currentRotorNumber = 0;

    else
        currentRotorNumber++;
}

void Rotor::decrementRotorNumber()
{
    if (currentRotorNumber == 0)
        currentRotorNumber = 25;

    else
        currentRotorNumber--;
}

unsigned char Rotor::rightToLeft (unsigned char rightSideCharacter)
{
    if (rightSideCharacter < 'A')
        rightSideCharacter = 'A';

    else if (rightSideCharacter > 'Z')
        rightSideCharacter = 'Z';

    return currentMap.righToLeft (rightSideCharacter);
}

unsigned char Rotor::leftToRight (unsigned char leftSideCharacter)
{
    if (leftSideCharacter < 'A')
        leftSideCharacter = 'A';

    else if (leftSideCharacter > 'Z')
        leftSideCharacter = 'Z';

    return currentMap.leftToRight (leftSideCharacter);
}

unsigned short int Rotor::getRotorNumber() const
{
    // Numbers go out as 1-26
    return currentRotorNumber + 1;
}
