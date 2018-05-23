//
// Created by Григорий on 15.05.2018.
//

#ifndef BUILDERPATTERN_SQUAD_H
#define BUILDERPATTERN_SQUAD_H

#pragma once

#include "Student.h"
#include <vector>
#include "../Factories/StudentsFactory.h"
#include "Mathematic.h"
#include "Physicist.h"
#include "Proger.h"

using std::vector;

class Squad: public Student {
public:
    void store(shared_ptr<ArmySnapshot> armySnapshot) override;
    void dump() override;
    void add(shared_ptr<Student> currSquad) override;
    void info() override;
    void delLast() override;
private:
    vector<shared_ptr<Student>> children;
};


#endif //BUILDERPATTERN_SQUAD_H
