//
//  Ranger.h
//  Guild Build
//
//  Created by Myles McKendell on 4/18/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#ifndef Ranger_h
#define Ranger_h

#pragma once
#include <string>
#include "Foe.h"

class Ranger :public Foe
{
private:
    std::string _name;
public:
    Ranger(std::string name);
    ~Ranger();
    
    
    std::string Attack() { return _name + " shoots arrows at his enemies!  PEW PEW PEW"; }
};
#endif /* Ranger_h */
