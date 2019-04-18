//
//  main.cpp
//  Enigma Machine
//
//  Created by Joseph Lyons on 4/10/19.
//  Copyright © 2019 Joseph Lyons. All rights reserved.
//

#include <iostream>
#include "EnigmaMachine.hpp"

int main()
{
    EnimgaMachine enigmaMachine (1, 1, 1);
    std::cout << enigmaMachine.getRotorNumbers() << std::endl;
}
