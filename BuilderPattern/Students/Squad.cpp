//
// Created by Григорий on 15.05.2018.
//

#include "Squad.h"

void Squad::info() {
    for (auto child: children) {
        child -> info();
    }
}

void Squad::add(shared_ptr<Student> currSquad) {
    children.push_back(currSquad);
}

void Squad::delLast() {
    if(children.size() > 0) {
        children.pop_back();
    }
}

void Squad::store(shared_ptr<ArmySnapshot> armySnapshot) {
    for (auto child : children) {
        child -> store(armySnapshot);
    }
}

void Squad::dump() {
    for (auto child : children) {
        child -> dump();
    }
}