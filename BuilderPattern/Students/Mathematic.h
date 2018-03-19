//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_MATHEMATIC_H
#define BUILDERPATTERN_MATHEMATIC_H

#pragma once

class Mathematic{
public:
    virtual ~Mathematic() = default;
    virtual void info() = 0;
};

#endif //BUILDERPATTERN_MATHEMATIC_H
