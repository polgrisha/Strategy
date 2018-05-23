//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_PROGER_H
#define BUILDERPATTERN_PROGER_H

#pragma once

#include "Student.h"

class Proger:public Student {
public:
    Proger (shared_ptr<Type> type);
    void info() override;
private:
};


#endif //BUILDERPATTERN_PROGER_H
