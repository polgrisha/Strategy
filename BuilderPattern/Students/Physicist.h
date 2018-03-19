//
// Created by Григорий on 18.03.2018.
//

#ifndef BUILDERPATTERN_PHYSICIST_H
#define BUILDERPATTERN_PHYSICIST_H

#pragma once

class Physicist {
public:
    virtual ~Physicist() = default;
    virtual void info() = 0;
};


#endif //BUILDERPATTERN_PHYSICIST_H
