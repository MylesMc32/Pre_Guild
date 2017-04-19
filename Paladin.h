//
//  Paladin.h
//  Guild Build
//
//  Created by Myles McKendell on 4/18/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#ifndef Paladin_h
#define Paladin_h


#pragma once
#include <string>
#include "Foe.h"
class Paladin : public Foe
{
private:
    std::string _name;
public:
    Paladin(std::string name);
    ~Paladin();
    
    
    std::string Attack() { return _name + " swings a giant maul at his foes!"; }
};
#endif /* Paladin_h */
