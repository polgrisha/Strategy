//
// Created by Григорий on 22.05.2018.
//

#include "UnitSnapshot.h"

shared_ptr<Student> UnitSnapshot::getUnit() {
    return unit;
}

UnitSnapshot::UnitSnapshot(shared_ptr<Student> _unit, int _knowledge, int _stamina, int _laziness) {
    unit = _unit;
    knowledge = _knowledge;
    stamina = _stamina;
    laziness = _laziness;
}


void UnitSnapshot::restore() {
    unit -> setCharacts(knowledge, laziness, stamina);
    shared_ptr<State> state(new PeaceState(unit));
    unit -> setState(state);
}