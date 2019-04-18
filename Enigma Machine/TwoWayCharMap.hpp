//
//  TwoWayMap.hpp
//  Enigma Machine
//
//  Created by Joseph Lyons on 4/18/19.
//  Copyright © 2019 Joseph Lyons. All rights reserved.
//

#ifndef TwoWayMap_hpp
#define TwoWayMap_hpp

#include <string>
#include <vector>

class TwoWayCharMap
{
private:
    std::string currentMap;

public:
    TwoWayCharMap (const std::string& map);
    ~TwoWayCharMap();

    char righToLeft (const char& rightSideCharacter);
    char leftToRight (const char& leftSideCharacter);
};

#endif /* TwoWayMap_hpp */
