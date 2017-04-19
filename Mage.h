//
//  Mage.h
//  Guild Build
//
//  Created by Myles McKendell on 4/18/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#ifndef Mage_h
#define Mage_h


#pragma once
#include <string>
#include "Foe.h"
class Mage : public Foe
{
private:
    std::string _name;
public:
    Mage(std::string name);
    ~Mage();
    
    
    std::string Attack() { return _name + " casts magic missle at the darkness!"; }
};
#endif /* Mage_h */
