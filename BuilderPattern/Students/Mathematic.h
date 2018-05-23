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
    void info() override;
};

#endif //BUILDERPATTERN_MATHEMATIC_H
