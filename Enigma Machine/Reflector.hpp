//
//  Reflector.hpp
//  Enigma Machine
//
//  Created by Joseph Lyons on 4/11/19.
//  Copyright © 2019 Joseph Lyons. All rights reserved.
//

#ifndef Reflector_hpp
#define Reflector_hpp

#include <string>

class Reflector
{
private:
    std::string currentMap;
    
public:
    Reflector (const std::string& map);

    unsigned char getMappedCharacter (unsigned char input) const;
};

#endif /* Reflector_hpp */
