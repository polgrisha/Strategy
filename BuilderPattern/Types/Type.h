//
// Created by Григорий on 15.05.2018.
//

#ifndef BUILDERPATTERN_TYPE_H
#define BUILDERPATTERN_TYPE_H

#pragma once;

class Type {
public:
    ~Type() = default;
    virtual void introduce() = 0;
};


#endif //BUILDERPATTERN_TYPE_H
