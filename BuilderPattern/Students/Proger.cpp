//
// Created by Григорий on 18.03.2018.
//

#include "Proger.h"

Proger::Proger(shared_ptr<Type> type) {
    studentType = type;
}

void Proger::info() {
    studentType -> introduce();
    cout << "Proger ";
    cout << "knowledge " << knowledge << " ";
    cout << "stamina " << stamina << " ";
    cout << "cost " << cost << " ";
    cout << "laziness " << laziness << " " << "\n";
}