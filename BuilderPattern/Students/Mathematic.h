//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_MATHEMATIC_H
#define BUILDERPATTERN_MATHEMATIC_H

#pragma once

#include "Student.h"

class Mathematic:public Student{
public:
    Mathematic(shared_ptr<Type> type);
    void info();
    void add(shared_ptr<Student> student){};
    void delLast(){};
private:
    int knowledge = 100;
    int stamina = 20;
    int laziness = 60;
};

#endif //BUILDERPATTERN_MATHEMATIC_H
