//
//  Rotor.hpp
//  Enigma Machine
//
//  Created by Joseph Lyons on 4/10/19.
//  Copyright © 2019 Joseph Lyons. All rights reserved.
//

#ifndef Rotor_hpp
#define Rotor_hpp

#include <string>
#include "TwoWayCharMap.hpp"

class Rotor
{
private:
    unsigned short int currentRotorNumber;
    TwoWayCharMap currentMap;
    
public:
    Rotor (const unsigned short int& currentIndex, const std::string& map);

    void setRotorNumber (const unsigned short int& rotorNumber);

    void incrementRotorNumber();
    void decrementRotorNumber();
    unsigned char rightToLeft (unsigned char rightSideCharacter);
    unsigned char leftToRight (unsigned char leftSideCharacter);
    unsigned short int getRotorNumber() const;
};

#endif /* Rotor_hpp */
