//
// Created by Григорий on 23.05.2018.
//

#ifndef BUILDERPATTERN_BATTLE_H
#define BUILDERPATTERN_BATTLE_H

#include "../Students/Student.h"
#include "../BackUp/ArmySnapshot.h"
#include <vector>
#include <iostream>

using std::vector;
using std::shared_ptr;
using std::min;

class Battle {
public:
    Battle(shared_ptr<Student> firstArmy, shared_ptr<Student> secondArmy);
    void fight();
    void info();
    void backup();
private:
    vector<shared_ptr<Student>> firstArmyLinear;
    vector<shared_ptr<Student>> secondArmyLinear;
    shared_ptr<ArmySnapshot> firstArmyShot;
    shared_ptr<ArmySnapshot> secondArmyShot;
    int death = 0;
    int alive = 0;
};


#endif //BUILDERPATTERN_BATTLE_H
