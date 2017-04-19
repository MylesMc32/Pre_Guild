//
//  Guild.h
//  Guild Build
//
//  Created by Myles McKendell on 4/18/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#ifndef Guild_h
#define Guild_h

#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Mage.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Warrior.h"
#include "Foe.h"

class Guild
{
private:
    std::vector<std::shared_ptr<Foe>> _foe;
    std::vector<std::shared_ptr<Mage>> _mages;
    std::vector<std::shared_ptr<Paladin>> _paladins;
    std::vector<std::shared_ptr<Ranger>> _rangers;
    std::vector<std::shared_ptr<Warrior>> _warriors;
    
    std::string _name;
    int _gold = 0;


public:
    Guild(std::string name);
    ~Guild();
    
    std::string GetName() const { return _name; }
    
    /*void AddMage(std::string name);
    void AddPaladin(std::string name);
    void AddRanger(std::string name);
    void AddWarrior(std::string name); 
     */
    
    
    
    
    void AddFoe(std::shared_ptr<Foe> newFoe);
    
   
    
    
   
    std::string GetInfo();
    
    std::string AttackWithMages();
    std::string AttackWithPaladins();
    std::string AttackWithRangers();
    std::string AttackWithWarriors();
    std::string AttackWithAllAdventurers();
};
#endif /* Guild_h */
