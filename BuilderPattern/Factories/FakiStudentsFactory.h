//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_FAKISTUDENTSFACTORY_H
#define BUILDERPATTERN_FAKISTUDENTSFACTORY_H

#pragma once
#include <memory>
#include <iostream>
#include "StudentsFactory.h"
#include "../FakiStudents/FakiMathematic.h"
#include "../FakiStudents/FakiPhysicist.h"
#include "../FakiStudents/FakiProger.h"


using std::shared_ptr;


class FakiStudentsFactory: public StudentsFactory {
public:
    shared_ptr<Student> createMathematic();
    shared_ptr<Student> createProger();
    shared_ptr<Student> createPhysicist();
};


#endif //BUILDERPATTERN_FAKISTUDENTSFACTORY_H
