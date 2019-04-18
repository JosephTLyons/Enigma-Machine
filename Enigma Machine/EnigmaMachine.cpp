//
//  EnigmaMachine.cpp
//  Enigma Machine
//
//  Created by Joseph Lyons on 4/10/19.
//  Copyright © 2019 Joseph Lyons. All rights reserved.
//

#include "EnigmaMachine.hpp"

EnimgaMachine::EnimgaMachine (const unsigned short int& rotorNumberOne,
                              const unsigned short int& rotorNumberTwo,
                              const unsigned short int& rotorNumberThree)
    : IC (rotorNumberOne, "DMTWSILRUYQNKFEJCAZBPGXOHV"),
      IIC (rotorNumberTwo, "HQZGPJTMOBLNCIFDYAWVEUSRKX"),
      IIIC (rotorNumberThree, "UQNTLSZFMREHDPXKIBVYGJCWOA"),
      reflectorA ("EJMZALYXVBWFCRQUONTSPIKHGD")
{

}

std::string EnimgaMachine::getRotorNumbers()
{
    return std::to_string (IC.getRotorNumber())
           + " " + std::to_string (IIC.getRotorNumber())
           + " " + std::to_string (IIIC.getRotorNumber());
}
