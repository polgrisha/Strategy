//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_STUDENTSFACTORY_H
#define BUILDERPATTERN_STUDENTSFACTORY_H

#pragma once
#include <memory>
#include <iostream>
#include "../Students/Mathematic.h"
#include "../Students/Physicist.h"
#include "../Students/Proger.h"
#include "../Types/RT.h"
#include "../Types/Faki.h"
#include "../Types/Type.h"

using std::shared_ptr;


class StudentsFactory {
public:
    virtual shared_ptr<Student> createMathematic() = 0;
    virtual shared_ptr<Student> createProger() = 0;
    virtual shared_ptr<Student> createPhysicist() = 0;
};


#endif //BUILDERPATTERN_STUDENTSFACTORY_H
