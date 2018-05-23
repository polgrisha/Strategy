//
// Created by Григорий on 22.05.2018.
//

#include "ArmySnapshot.h"

void ArmySnapshot::getLinearArmy(vector<shared_ptr<Student>> &army) {
    for (auto unit : unitSnapshots) {
        army.push_back(unit -> getUnit());
    }
}

void ArmySnapshot::addShot(shared_ptr<UnitSnapshot> snapshot) {
    unitSnapshots.push_back(snapshot);
}

void ArmySnapshot::restore() {
    for (auto shot:unitSnapshots) {
        shot -> restore();
    }
}