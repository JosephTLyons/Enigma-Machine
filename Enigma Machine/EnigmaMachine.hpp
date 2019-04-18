//
//  EnigmaMachine.hpp
//  Enigma Machine
//
//  Created by Joseph Lyons on 4/10/19.
//  Copyright © 2019 Joseph Lyons. All rights reserved.
//

#ifndef EnigmaMachine_hpp
#define EnigmaMachine_hpp

#include <string>
#include "Reflector.hpp"
#include "Rotor.hpp"

class EnimgaMachine
{
private:
    Rotor IC;
    Rotor IIC;
    Rotor IIIC;
    Reflector reflectorA;
    
public:
    EnimgaMachine (const unsigned short int& rotorNumberOne,
                   const unsigned short int& rotorNumberTwo,
                   const unsigned short int& rotorNumberThree);

    std::string getRotorNumbers();
};

#endif /* EnigmaMachine_hpp */
