//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_PHYSICIST_H
#define BUILDERPATTERN_PHYSICIST_H

#pragma once

#include "Student.h"
class Physicist:public Student {
public:
    Physicist(shared_ptr<Type> type);
    void info();
private:
    int knowledge = 60;
    int stamina = 80;
    int laziness = 50;
};


#endif //BUILDERPATTERN_PHYSICIST_H
