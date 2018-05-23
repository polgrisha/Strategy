//
// Created by Григорий on 18.03.2018.
//

#include "Proger.h"

Proger::Proger(shared_ptr<Type> type) {
    knowledge = 80;
    stamina = 80;
    laziness = 100;
    studentType = type;
    laziness += type -> addLaziness();
    knowledge += type -> addKnowledge();
    stamina += type -> addStamina();
}

void Proger::info() {
    studentType -> introduce();
    cout << "Proger ";
    state -> info();
}