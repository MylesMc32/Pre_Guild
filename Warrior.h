//
//  Warrior.h
//  Guild Build
//
//  Created by Myles McKendell on 4/18/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#ifndef Warrior_h
#define Warrior_h

#pragma once
#include <string>
#include "Foe.h"
class Warrior : public Foe
{
private:
    std::string _name;
public:
    Warrior(std::string name);
    ~Warrior();
    
    
    std::string Attack() { return _name + " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD!"; }
};
#endif /* Warrior_h */
