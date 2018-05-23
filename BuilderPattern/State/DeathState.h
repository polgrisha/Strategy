//
// Created by Григорий on 23.05.2018.
//

#ifndef BUILDERPATTERN_DEATHSTATE_H
#define BUILDERPATTERN_DEATHSTATE_H

#pragma once

#include "State.h"
#include <iostream>

using std::cout;

class DeathState: public State {
public:
    DeathState(shared_ptr<Student> _student);
    void info() override;
};


#endif //BUILDERPATTERN_DEATHSTATE_H
