//
// Created by Григорий on 23.05.2018.
//

#ifndef BUILDERPATTERN_STATE_H
#define BUILDERPATTERN_STATE_H

#pragma once


#include <iostream>

using std::shared_ptr;

class Student;

class State {
public:
    State() = default;
    virtual void info();
    virtual ~State() = default;
protected:
    shared_ptr<Student> student;
};

#include "../Students/Student.h"

#endif //BUILDERPATTERN_STATE_H
