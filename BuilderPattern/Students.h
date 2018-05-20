//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_STUDENTS_H
#define BUILDERPATTERN_STUDENTS_H


#pragma once

#include <vector>
#include <memory>
#include <iostream>
#include "Factories/StudentsFactory.h"
#include "Students/Mathematic.h"
#include "Students/Physicist.h"
#include "Students/Proger.h"

using std::shared_ptr;
using std::vector;
using std::cout;

class Students{
public:
    void addMathematic(shared_ptr<StudentsFactory> factory);
    void addPhysicist(shared_ptr<StudentsFactory> factory);
    void addProger(shared_ptr<StudentsFactory> factory);
    void showStudents();
private:
    vector<shared_ptr<Student>> students;
};


#endif //BUILDERPATTERN_STUDENTS_H
