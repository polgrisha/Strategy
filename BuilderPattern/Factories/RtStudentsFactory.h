//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_RTSTUDENTSFACTORY_H
#define BUILDERPATTERN_RTSTUDENTSFACTORY_H

#pragma once
#include "StudentsFactory.h"


class RtStudentsFactory: public StudentsFactory{
public:
    shared_ptr<Student> createMathematic();
    shared_ptr<Student> createProger();
    shared_ptr<Student> createPhysicist();
};


#endif //BUILDERPATTERN_RTSTUDENTSFACTORY_H
