//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_RTPHYSICIST_H
#define BUILDERPATTERN_RTPHYSICIST_H


#pragma once
#include <iostream>
#include "../Students/Physicist.h"

using std::cout;


class RtPhysicist: public Physicist {
public:
    void info();
};


#endif //BUILDERPATTERN_RTPHYSICIST_H
