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
using std::runtime_error;

class Student {
public:
    Student() = default;
    virtual void info();
    virtual int showCost();
    virtual void add(shared_ptr<Student> student);
    virtual void delLast();
    virtual ~Student() = default;
protected:
    int cost = 30;
    shared_ptr<Type> studentType;
};


#endif //BUILDERPATTERN_STUDENT_H
