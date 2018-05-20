//
// Created by Григорий on 15.05.2018.
//

#ifndef BUILDERPATTERN_STUDENT_H
#define BUILDERPATTERN_STUDENT_H

#pragma once

#include "../Types/Type.h"
#include <iostream>

using std::cout;
using std::shared_ptr;

class Student {
public:
    //Student(Type type);
    virtual void info() = 0;
    int showCost();
    virtual ~Student() = default;
protected:
    int knowledge = 50;
    int stamina = 50;
    int laziness = 30;
    int cost = 30;
    shared_ptr<Type> studentType;
};


#endif //BUILDERPATTERN_STUDENT_H
