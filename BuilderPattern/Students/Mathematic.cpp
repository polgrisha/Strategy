//
// Created by Григорий on 18.03.2018.
//

#include "Mathematic.h"

Mathematic::Mathematic(shared_ptr<Type> type) {
    studentType = type;
    knowledge = 100;
    laziness = 100;
    stamina = 100;
    laziness += type -> addLaziness();
    knowledge += type -> addKnowledge();
    stamina += type -> addStamina();
}

void Mathematic::info() {
    studentType -> introduce();
    cout << "Mathematic" << " ";
    state -> info();
}