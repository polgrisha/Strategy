//
// Created by Григорий on 18.03.2018.
//

#include "Physicist.h"

Physicist::Physicist(shared_ptr<Type> type) {
    knowledge = 60;
    stamina = 80;
    laziness = 50;
    studentType = type;
    laziness += type -> addLaziness();
    knowledge += type -> addKnowledge();
    stamina += type -> addStamina();
}

void Physicist::info() {
    studentType -> introduce();
    cout << "Physicist ";
    state -> info();
}