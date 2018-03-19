//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_FAKIPHYSICIST_H
#define BUILDERPATTERN_FAKIPHYSICIST_H

#pragma once
#include <iostream>
#include "../Students/Physicist.h"


class FakiPhysicist: public Physicist {
public:
    void info();
};


#endif //BUILDERPATTERN_FAKIPHYSICIST_H
