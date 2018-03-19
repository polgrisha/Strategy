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
    shared_ptr<Mathematic> createMathematic();
    shared_ptr<Proger> createProger();
    shared_ptr<Physicist> createPhysicist();
};


#endif //BUILDERPATTERN_FAKISTUDENTSFACTORY_H
