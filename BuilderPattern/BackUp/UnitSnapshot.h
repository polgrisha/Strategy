//
// Created by Григорий on 22.05.2018.
//

#ifndef BUILDERPATTERN_UNITSNAPSHOT_H
#define BUILDERPATTERN_UNITSNAPSHOT_H

#include <iostream>
#include "../Students/Student.h"
#include "../State/PeaceState.h"
#include "../State/DeathState.h"

#pragma once

using std::cout;

class UnitSnapshot {
public:
    UnitSnapshot(shared_ptr<Student> _unit, int _knowledge, int _stamina, int _laziness);
    shared_ptr<Student> getUnit();
    void restore();
private:
    int stamina;
    int laziness;
    int knowledge;
    shared_ptr<Student> unit;
};



#endif //BUILDERPATTERN_UNITSNAPSHOT_H
