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
    void addMathematic(shared_ptr<StudentsFactory> factory);
    void addPhysicist(shared_ptr<StudentsFactory> factory);
    void addProger(shared_ptr<StudentsFactory> factory);
    void add(shared_ptr<Student> currSquad);
    void info();
    void delLast();
private:
    vector<shared_ptr<Student>> children;
};


#endif //BUILDERPATTERN_SQUAD_H
