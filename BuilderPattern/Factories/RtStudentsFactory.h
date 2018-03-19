//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_RTSTUDENTSFACTORY_H
#define BUILDERPATTERN_RTSTUDENTSFACTORY_H

#pragma once
#include "StudentsFactory.h"
#include "../RtStudents/RtPhysicist.h"
#include "../RtStudents/RtMathematic.h"
#include "../RtStudents/RtProger.h"

class RtStudentsFactory: public StudentsFactory{
    shared_ptr<Mathematic> createMathematic();
    shared_ptr<Proger> createProger();
    shared_ptr<Physicist> createPhysicist();
};


#endif //BUILDERPATTERN_RTSTUDENTSFACTORY_H
