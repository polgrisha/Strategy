//
// Created by Григорий on 23.05.2018.
//

#ifndef BUILDERPATTERN_PEACESTATE_H
#define BUILDERPATTERN_PEACESTATE_H

#include "State.h"

class PeaceState: public State {
public:
    PeaceState(shared_ptr<Student> _student);
    void info() override;
};


#endif //BUILDERPATTERN_PEACESTATE_H
