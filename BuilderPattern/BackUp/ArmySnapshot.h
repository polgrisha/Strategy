//
// Created by Григорий on 22.05.2018.
//

#ifndef BUILDERPATTERN_ARMYSNAPSHOT_H
#define BUILDERPATTERN_ARMYSNAPSHOT_H

#pragma once

#include "../Students/Student.h"
#include "UnitSnapshot.h"
#include <iostream>
#include <deque>
#include <vector>

using std::shared_ptr;
using std::deque;
using std::vector;

class ArmySnapshot {
public:
    void addShot(shared_ptr<UnitSnapshot> snapshot);
    void getLinearArmy(vector<shared_ptr<Student>> &army);
    void restore();
private:
    deque<shared_ptr<UnitSnapshot>> unitSnapshots;
};

#endif //BUILDERPATTERN_ARMYSNAPSHOT_H
