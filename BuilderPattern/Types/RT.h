//
// Created by Григорий on 15.05.2018.
//

#ifndef BUILDERPATTERN_RT_H
#define BUILDERPATTERN_RT_H

#pragma once;

#include "Type.h"
#include <iostream>

using std::cout;

class RT:public Type {
public:
    void introduce() override ;
    int addKnowledge() override ;
    int addStamina() override;
    int addLaziness() override;
};


#endif //BUILDERPATTERN_RT_H
