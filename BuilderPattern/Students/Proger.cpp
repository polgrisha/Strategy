//
// Created by Григорий on 18.03.2018.
//

#include "Proger.h"

Proger::Proger(shared_ptr<Type> type) {
    studentType = type;
    laziness += type -> addLaziness();
    knowledge += type -> addKnowledge();
    stamina += type -> addStamina();
}

void Proger::info() {
    studentType -> introduce();
    cout << "Proger ";
    cout << "cost " << cost << " ";
    cout << "knowledge " << knowledge << " ";
    cout << "stamina " << stamina << " ";
    cout << "laziness " << laziness << " " << "\n";
}