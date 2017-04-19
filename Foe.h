//
//  Foe.h
//  Guild Build
//
//  Created by Myles McKendell on 4/18/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#ifndef Foe_h
#define Foe_h


#pragma once
#include <string>

class Foe
{
    
    
private:
    std::string _name;
    
    
public:
    
    Foe(std::string name);
    ~Foe();
    
    std::string GetName() const { return _name; }
    std::string virtual Attack() { return _name + " Leveled by a G-force!"; }
};
#endif /* Foe_h */
