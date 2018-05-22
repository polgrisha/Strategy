//
// Created by Григорий on 15.05.2018.
//

#ifndef BUILDERPATTERN_FAKI_H
#define BUILDERPATTERN_FAKI_H

#pragma once

#include "Type.h"
#include <iostream>

using std::cout;

class Faki:public Type {
public:
    void introduce();
    int addKnowledge() override ;
    int addStamina() override;
    int addLaziness() override;
};


#endif //BUILDERPATTERN_FAKI_H
