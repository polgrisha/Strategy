//
// Created by Григорий on 18.03.2018.
//

#include "Physicist.h"

Physicist::Physicist(shared_ptr<Type> type) {
    studentType = type;
    laziness += type -> addLaziness();
    knowledge += type -> addKnowledge();
    stamina += type -> addStamina();
}

void Physicist::info() {
    studentType -> introduce();
    cout << "Physicist ";
    cout << "cost " << cost  << " ";
    cout << "knowledge " << knowledge << " ";
    cout << "stamina " << stamina << " ";
    cout << "laziness " << laziness << " " << "\n";
}